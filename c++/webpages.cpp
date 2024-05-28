#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int findMinClicks(int N, vector<vector<int>>& pages, int start, int end) {
    vector<bool> visited(N + 1, false);
    deque<pair<int, int>> queue;
    queue.push_back({start, 0});

    while (!queue.empty()) {
        pair<int, int> current = queue.front();
        queue.pop_front();

        int current_page = current.first;
        int clicks = current.second;
        visited[current_page] = true;

        if (current_page == end) {
            return clicks;
        }

        for (int i = pages[current_page].size() - 1; i >= 0; i--) {
            int linked_page = pages[current_page][i];
            if (!visited[linked_page]) {
                queue.push_back({linked_page, clicks + 1});
            }
        }
    }

    return -1;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> pages(N + 1);
    for (int i = 1; i <= N; i++) {
        int M;
        cin >> M;
        pages[i].resize(M);
        for (int j = 0; j < M; j++) {
            cin >> pages[i][j];
        }
    }

    int start, end;
    cin >> start >> end;

    int result = findMinClicks(N, pages, start, end);
    cout << result << endl;

    return 0;
}
