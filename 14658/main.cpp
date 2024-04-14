#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int M, N, L, K;
vector<pair<int, int>> v;


int main(void) {
    cin >> M >> N >> L >> K;

    int x, y;
    for (int i = 0; i < K; i++) {
        cin >> x >> y;
        v.push_back({x, y});

    }

    int cnt = 0;
    int ma = -1;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            int temp_x = (v.begin() + i)->first;
            int temp_y = (v.begin() + j)->second;
            cnt = 0;
            for (auto itr = v.begin(); itr != v.end(); itr++) {
                if (temp_x <= itr->first && temp_x + L >= itr->first &&
                    temp_y <= itr->second && temp_y + L >= itr->second) {
                    cnt++;
                }
            }
            ma = max(ma, cnt);
        }
    }
    cout << K - ma;
}