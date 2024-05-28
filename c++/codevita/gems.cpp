#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int maximize_gems(int n, const vector<pair<int, int>>& dishes) {
    unordered_map<int, int> gems;

    for (const auto& dish : dishes) {
        int id = dish.first;
        int rating = dish.second;

        if (gems.find(id) == gems.end()) {
            gems[id] = rating;
        } else {
            gems[id] += rating;
        }
    }

    int max_gems = 0;

    for (const auto& entry : gems) {
        max_gems = max(max_gems, entry.second);
    }

    return max_gems;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> dishes;
    for (int i = 0; i < n; ++i) {
        int id, rating;
        char colon;
        cin >> id >> colon >> rating;
        dishes.push_back({id, rating});
    }

    cout << maximize_gems(n, dishes) << endl;
    return 0;
}
