#include <iostream>
#include <string>

using namespace std;

bool is_binary_string(const string& s) {
    return all_of(s.begin(), s.end(), [](char c) { return c == '0' || c == '1'; });
}

int hamming_distance(const string& s1, const string& s2) {
    return count_if(s1.begin(), s1.end(), [&s2](char c1) {
        return c1 != s2[&c1 - &s1[0]];
    });
}

string min_cost_and_distance(const string& s, int a, int b) {
    if (!is_binary_string(s)) {
        return "INVALID";
    }

    int cost_01 = count(s.begin(), s.end(), "01") * a;
    int cost_10 = count(s.begin(), s.end(), "10") * b;

    int original_cost = cost_01 + cost_10;
    string original_string = s;

    string transformed_string = s;
    size_t pos = transformed_string.find("01");
    while (pos != string::npos) {
        transformed_string.replace(pos, 2, "10");
        pos = transformed_string.find("01");
    }

    int cost_01_transformed = count(transformed_string.begin(), transformed_string.end(), "01") * a;
    int cost_10_transformed = count(transformed_string.begin(), transformed_string.end(), "10") * b;

    int transformed_cost = cost_01_transformed + cost_10_transformed;

    if (transformed_cost < original_cost) {
        int hamming_dist = hamming_distance(original_string, transformed_string);
        return to_string(hamming_dist);
    } else {
        int hamming_dist = hamming_distance(original_string, original_string);
        return to_string(hamming_dist);
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int a, b;
        cin >> a >> b;

        string result = min_cost_and_distance(s, a, b);
        cout << result << endl;
    }

    return 0;
}
