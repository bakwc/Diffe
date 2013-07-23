#include <iostream>
#include <unordered_set>

#include "main.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        cerr << "\nUsage: diffe file1 file2\n\n";
        return(42);
    }
    unordered_set<string> file1 = LoadFile(argv[1]);
    unordered_set<string> file2 = LoadFile(argv[2]);
    vector<string> simm = GetDiffer(file1, file2);
    PrintVector(simm);
    return 0;
}