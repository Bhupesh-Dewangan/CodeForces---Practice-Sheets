#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    vector<int> cost(26);
    for (int i = 0; i < 26; i++) {
        cin >> cost[i];
    }
    
    int n = s.length();
    const ll INF = 1e18;
    
    // DP arrays: dp[char] = min cost up to current position ending with 'char'
    // prev_char[char] = previous character that gives dp[char]
    vector<ll> dp(26, INF);
    vector<int> prev_char(26, -1);
    
    // Initialize for first character
    if (s[0] == '?') {
        for (int ch = 0; ch < 26; ch++) {
            dp[ch] = 0;
        }
    } else {
        int ch = s[0] - 'a';
        dp[ch] = 0;
    }
    
    // Store DP for each position to reconstruct later
    vector<vector<ll>> dp_history(n, vector<ll>(26, INF));
    vector<vector<int>> prev_history(n, vector<int>(26, -1));
    
    if (s[0] == '?') {
        for (int ch = 0; ch < 26; ch++) {
            dp_history[0][ch] = 0;
        }
    } else {
        int ch = s[0] - 'a';
        dp_history[0][ch] = 0;
    }
    
    // Sort letters by cost for efficient query
    vector<int> sorted_by_cost(26);
    iota(sorted_by_cost.begin(), sorted_by_cost.end(), 0);
    sort(sorted_by_cost.begin(), sorted_by_cost.end(), 
         [&](int a, int b) { return cost[a] < cost[b]; });
    
    for (int i = 1; i < n; i++) {
        // Prepare prefix and suffix minima arrays
        vector<ll> prefix_min(26, INF), suffix_min(26, INF);
        vector<int> prefix_char(26, -1), suffix_char(26, -1);
        
        // Build prefix minima (for prev cost <= current cost)
        for (int idx = 0; idx < 26; idx++) {
            int ch = sorted_by_cost[idx];
            ll val = dp[ch] - cost[ch];
            if (idx == 0 || val < prefix_min[idx-1] || 
                (val == prefix_min[idx-1] && ch < prefix_char[idx-1])) {
                prefix_min[idx] = val;
                prefix_char[idx] = ch;
            } else {
                prefix_min[idx] = prefix_min[idx-1];
                prefix_char[idx] = prefix_char[idx-1];
            }
        }
        
        // Build suffix minima (for prev cost >= current cost)
        for (int idx = 25; idx >= 0; idx--) {
            int ch = sorted_by_cost[idx];
            ll val = dp[ch] + cost[ch];
            if (idx == 25 || val < suffix_min[idx+1] ||
                (val == suffix_min[idx+1] && ch < suffix_char[idx+1])) {
                suffix_min[idx] = val;
                suffix_char[idx] = ch;
            } else {
                suffix_min[idx] = suffix_min[idx+1];
                suffix_char[idx] = suffix_char[idx+1];
            }
        }
        
        vector<ll> new_dp(26, INF);
        vector<int> new_prev(26, -1);
        
        // Process current position
        if (s[i] == '?') {
            // Can be any letter
            for (int curr_ch = 0; curr_ch < 26; curr_ch++) {
                // Find split point in sorted_by_cost where cost[prev] <= cost[curr_ch]
                int lo = 0, hi = 25, split = -1;
                while (lo <= hi) {
                    int mid = (lo + hi) / 2;
                    if (cost[sorted_by_cost[mid]] <= cost[curr_ch]) {
                        split = mid;
                        lo = mid + 1;
                    } else {
                        hi = mid - 1;
                    }
                }
                
                ll best = INF;
                int best_prev = -1;
                
                // Case 1: previous letter with cost <= current
                if (split >= 0) {
                    ll candidate = prefix_min[split] + cost[curr_ch];
                    if (candidate < best || 
                        (candidate == best && prefix_char[split] < best_prev)) {
                        best = candidate;
                        best_prev = prefix_char[split];
                    }
                }
                
                // Case 2: previous letter with cost >= current
                if (split + 1 < 26) {
                    ll candidate = suffix_min[split + 1] - cost[curr_ch];
                    if (candidate < best ||
                        (candidate == best && suffix_char[split + 1] < best_prev)) {
                        best = candidate;
                        best_prev = suffix_char[split + 1];
                    }
                }
                
                new_dp[curr_ch] = best;
                new_prev[curr_ch] = best_prev;
            }
        } else {
            // Fixed letter at this position
            int curr_ch = s[i] - 'a';
            
            // Find split point
            int lo = 0, hi = 25, split = -1;
            while (lo <= hi) {
                int mid = (lo + hi) / 2;
                if (cost[sorted_by_cost[mid]] <= cost[curr_ch]) {
                    split = mid;
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
            
            ll best = INF;
            int best_prev = -1;
            
            if (split >= 0) {
                ll candidate = prefix_min[split] + cost[curr_ch];
                if (candidate < best ||
                    (candidate == best && prefix_char[split] < best_prev)) {
                    best = candidate;
                    best_prev = prefix_char[split];
                }
            }
            
            if (split + 1 < 26) {
                ll candidate = suffix_min[split + 1] - cost[curr_ch];
                if (candidate < best ||
                    (candidate == best && suffix_char[split + 1] < best_prev)) {
                    best = candidate;
                    best_prev = suffix_char[split + 1];
                }
            }
            
            new_dp[curr_ch] = best;
            new_prev[curr_ch] = best_prev;
        }
        
        // Update for next iteration and store history
        dp = new_dp;
        for (int ch = 0; ch < 26; ch++) {
            dp_history[i][ch] = new_dp[ch];
            prev_history[i][ch] = new_prev[ch];
        }
    }
    
    // Find minimal cost at last position
    ll min_cost = INF;
    int last_char = -1;
    for (int ch = 0; ch < 26; ch++) {
        if (dp[ch] < min_cost) {
            min_cost = dp[ch];
            last_char = ch;
        } else if (dp[ch] == min_cost && ch < last_char) {
            last_char = ch;
        }
    }
    
    // Reconstruct the string
    string result = s;
    result[n-1] = 'a' + last_char;
    int curr_char = last_char;
    
    for (int i = n-1; i > 0; i--) {
        curr_char = prev_history[i][curr_char];
        result[i-1] = 'a' + curr_char;
    }
    
    cout << min_cost << "\n" << result << "\n";
    
    return 0;
}

