#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool compare(const pair<int, bool>& a, const pair<int, bool>& b) {
    return a.first > b.first;
}

int main() {
    int T;
    cin >> T;

    int N, M;

    for (int i = 0;i < T;i++) {
        queue<pair<int, bool>> Q;
        deque<pair<int, bool>> DQ;
        cin >> N >> M;
        for (int j = 0;j < N;j++) {
            int V;
            cin >> V;
            if (j == M) Q.push(make_pair(V, true));
            else Q.push(make_pair(V, false));

            DQ.push_back(Q.front());
        }

        sort(DQ.begin(), DQ.end(), compare);

        for (int j = 0;j < N;j++) {
            if (Q.front() != DQ.front())
            {
                j--;
                Q.push(Q.front());
                Q.pop();
            }
        }

        for (int j = 0;j < N;j++) {
            if (Q.front().second) {
                cout << j + 1 << "\n";
                break;
            }
        }
    }
}