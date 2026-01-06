#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> card;
    for (int i = 0;i < N;i++) {
        int t;
        cin >> t;
        card.push_back(t);
    }
    sort(card.begin(), card.end());
    int sum = 0;
    int max = 0;


    for (int i = 0; i < card.size() - 2;i++) {
        sum += card.at(i);
        if (sum > M)
            continue;

        for (int j = i + 1;j < card.size() - 1;j++) {
            sum += card.at(i);
            if (sum > M)
                continue;

            for (int k = j + 1;k < card.size();k++) {
                sum += card.at(i);
                if (sum > M)
                    continue;
            }
        }
        if (max < sum && sum <= M)
            max = sum;

    }

    cout << max << endl;
}

