#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
#include <queue>

using namespace std;
int cnt[100001];
int N;
int arr[100001];
vector<pair<int, int>> v[100001];
stack<pair<int, int>> s;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <=N; i++) {
        while (true) {
            if (s.empty()) {
                s.push({i, arr[i]});
                break;
            }
            if (s.top().second > arr[i]) {
                cnt[i] += s.size();
                v[i].push_back({s.top().first, s.top().second});
                s.push({i, arr[i]});
                break;
            } else {
                s.pop();
            }
        }
    }
    while(!s.empty()) {
        s.pop();
    }
    if (!s.empty()) {
        s.pop();
    }
    for (int i = N; i >= 1; i--) {
        while (true) {
            if (s.empty()) {
                s.push({i, arr[i]});
                break;
            }
            if (s.top().second > arr[i]) {
                cnt[i] += s.size();
                v[i].push_back({s.top().first, s.top().second});
                s.push({i, arr[i]});
                break;
            } else {
                s.pop();
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        int mi = 2147483647;
        int im;
        if (cnt[i] == 0) {
            cout << 0 << '\n';
        } else {
            cout << cnt[i] << " ";
            for (auto itr = v[i].begin(); itr != v[i].end(); itr++) {
                if (mi > (abs(i-itr->first))) {
                    mi = abs(i-itr->first);
                    im = itr->first;
                }
            }
            cout << im << '\n';
        }
    }
}