#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum State {
    NORMAL,
    SINGLE_COMMENT,
    MULTI_COMMENT
};

vector<string> clean_cpp_code(const vector<string>& source_lines) {
    State state = NORMAL;
    vector<string> output_lines;
    string current_line;
    
    for (const string& line : source_lines) {
        size_t j = 0;
        while (j < line.size()) {
            char ch = line[j];
            
            if (state == NORMAL) {
                if (ch == '/' && j + 1 < line.size()) {
                    char next_ch = line[j + 1];
                    if (next_ch == '/') {
                        state = SINGLE_COMMENT;
                        j++; // skip the second '/'
                    } else if (next_ch == '*') {
                        state = MULTI_COMMENT;
                        j++; // skip the '*'
                    } else {
                        current_line += ch;
                    }
                } else {
                    current_line += ch;
                }
            }
            else if (state == SINGLE_COMMENT) {
                // ignore everything until end of line
            }
            else if (state == MULTI_COMMENT) {
                if (ch == '*' && j + 1 < line.size() && line[j + 1] == '/') {
                    state = NORMAL;
                    j++; // skip the '/'
                }
            }
            j++;
        }
        
        // End of line
        if (state == SINGLE_COMMENT) {
            state = NORMAL; // // comment ends at newline
        }
        
        // Remove trailing spaces
        size_t end_pos = current_line.find_last_not_of(" \t");
        if (end_pos != string::npos) {
            current_line = current_line.substr(0, end_pos + 1);
        } else {
            current_line.clear();
        }
        
        // Add non-empty line to output
        if (!current_line.empty()) {
            output_lines.push_back(current_line);
        }
        current_line.clear();
    }
    
    return output_lines;
}

int main() {
    vector<string> source_lines;
    string line;
    
    // Read all lines
    while (getline(cin, line)) {
        source_lines.push_back(line);
    }
    
    // Clean the code
    vector<string> cleaned = clean_cpp_code(source_lines);
    
    // Output cleaned code
    for (const string& cleaned_line : cleaned) {
        cout << cleaned_line << endl;
    }
    
    return 0;
}


