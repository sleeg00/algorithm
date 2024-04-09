#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N;
int arr[500001];
stack<pair<int, int>> s;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;
    int x;
    for (int i = 1; i <= N; i++) {
        cin >> x;
        while (!s.empty()) {
            if (s.top().second > x) {
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if (s.empty()) {
            cout << 0 << " ";
        }
        s.push({i, x});
    }
}