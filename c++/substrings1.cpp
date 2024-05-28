#include <bits/stdc++.h>
using namespace std;



void printSubstrings(string& str,vector<string>&substrings) {
    int n = str.length();
    for (int i = 0; i < n; ++i) {
        string subStr;
        for (int j = i; j < n; ++j) {
            subStr += str[j];
            substrings.push_back(subStr);
        }
    }
}
int main() {
    vector<string>substrings;
    string s = "gvgvvgv";
    printSubstrings(s,substrings);
    for(int i=0; i<s.size(); i++){
        cout<<substrings[i]<<" ";
    }
    return 0;
}