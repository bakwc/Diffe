#include <iostream>
#include <fstream>
#include <vector>

#include "main.h"

unordered_set<string> LoadFile(const string& file) {
    ifstream in(file);
    if (!in) {
        cerr << "failed to load file: " << file << "\n";
        _exit(42);
    }
    string line;
    unordered_set<string> lines;
    while(in) {
        getline(in, line);  // delim defaults to '\n'
        if(in && !line.empty()) {
            lines.insert(line);
        }
    }
    return lines;
}

vector<string> GetSimmilar(const unordered_set<string>& data1, const unordered_set<string>& data2) {
    vector<string> simm;
    for (unordered_set<string>::const_iterator it = data1.begin(); it != data1.end(); it++) {
        if (data2.find(*it) != data2.end()) {
            simm.push_back(*it);
        }
    }
    return simm;
}

vector<string> GetDiffer(const unordered_set<string>& data1, const unordered_set<string>& data2) {
    vector<string> diff;
    for (unordered_set<string>::const_iterator it = data1.begin(); it != data1.end(); it++) {
        if (data2.find(*it) == data2.end()) {
            diff.push_back(*it);
        }
    }
    return diff;
}

void PrintVector(const vector<string>& data) {
    for (size_t i = 0; i < data.size(); i++) {
        cout << data[i] << "\n";
    }
}
