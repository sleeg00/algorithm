/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;
unordered_map<int, int> m;
int N; // 접시 수
int D; // 가짓 수
int K; // 연속 수
int C; // 쿠폰

int visit[30001];
int check = 0;
int cnt = 0;
int arr[10000];
queue<pair<int, int>> q;
int ma = 0;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int st;
    int dish;
    int dish_arrow;

    cin >> N >> D >> K >> C;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N; i < N + K - 1; i++) {
        arr[i] = arr[i - N];
    }
    for (int i = 0; i < N; i++) {
        m.clear();
        for (int j = i; j < K + i; j++) {
            if (m.find(arr[j]) == m.end()) {
                m.insert({arr[j], 1});
            } else {
                break;
            }
        }
        int checkSize = m.size();
        if (checkSize == K) {
            if (m.find(C) == m.end()) {
                ma = max(ma, K + 1);
            } else {
                ma = max(ma, K);
            }
        } else {
            ma = max(ma, checkSize);
        }

    }
    cout << ma;
}
 */