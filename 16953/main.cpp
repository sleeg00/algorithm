
// A->B
// 2 -> 162
// 2 * 2 = 4
// 21 =
// 4 * 2
// 21 *2 => 42
// 10의 9승 10,000,000,000 => 100억
// A가 B를 넘으면 X

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a,b;
    long value,count;
    queue<pair<long long, long long>> q;

    cin >> a >> b;
    q.push(make_pair(a,0));

    while(!q.empty()) {
        value = q.front().first;
        count = q.front().second;
        if (value == b) {
            cout << count+1;
            return 0;
        }
        q.pop();
        if (value < b) {
            q.push(make_pair(value * 2, count + 1));
            q.push(make_pair(value * 10 + 1, count + 1));
        }
    }
    cout << "-1";
    return 0;
}