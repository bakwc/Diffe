#pragma once

#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

unordered_set<string> LoadFile(const string& file);
vector<string> GetSimmilar(const unordered_set<string>& data1, const unordered_set<string>& data2);
vector<string> GetDiffer(const unordered_set<string>& data1, const unordered_set<string>& data2);
void PrintVector(const vector<string>& data);
