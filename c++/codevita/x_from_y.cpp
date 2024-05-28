#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int calculateStringFactor(const string& X, const string& Y, int S, int R) {
    int minStringFactor = INT_MAX;

    for (int length = 1; length <= Y.length(); ++length) {
        for (int i = 0; i <= Y.length() - length; ++i) {
            string substring = Y.substr(i, length);
            string reversedSubstring = substring;
            reverse(reversedSubstring.begin(), reversedSubstring.end());
            string formedX = substring + reversedSubstring;

            int stringFactor = (count(formedX.begin(), formedX.end(), substring[0]) * S) +
                               (count(formedX.begin(), formedX.end(), reversedSubstring[0]) * R);
            minStringFactor = min(minStringFactor, stringFactor);
        }
    }

    return minStringFactor;
}

int main() {
    string X = "abc";
    string Y = "abcd";
    int S = 2;
    int R = 3;

    int result = calculateStringFactor(X, Y, S, R);
    cout << result << endl;

    return 0;
}
