#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
// 0.5초
// 10,000,000 (1000만)

int N;
vector<pair<int, int>> v;

int main(void) {
    cin >> N;
    v.push_back({1, 1});
    int k=2;
    int cnt = 1;
    for (int i = 1; i <= 5000; i++) {
        int x = v[v.size() - 1].first;
        int y = v[v.size() - 1].second;

        if (y == cnt) {
            v.push_back({1, cnt + 1});
            cnt++;
            for (int j = 0; j < cnt - 1; j++) {
                v.push_back({j+2, cnt-j-1});
            }
        } else if (x == cnt) {
            v.push_back({cnt + 1, 1});
            cnt++;
            for (int j = 0; j < cnt - 1; j++) {
                v.push_back({cnt - j - 1, j + 2});
            }
        }
        if(v.size()>10000002) {
            break;
        }
    }

    cout << v[N - 1].first << "/" << v[N - 1].second;
}