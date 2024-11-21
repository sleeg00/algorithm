#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

// 4MB?
// 1 ~ N 까지 N개의 풍선 원형
// i번 풍선 오른쪽 i+1풍선, 왼쪽에는 i-1풍선
// 1번 풍선 왼쪽 N번 풍선
// N번 풍선 오른쪽 1번 풍선
// 1번 풍선 터트리기, 풍선 안에 종이를 읽어 적혀있는 값만큼 이동후 터트리기, 음수 왼쪽 양수 오른쪽
// 1 2 3 4 5
// 3 2 1 -3 -1
deque<pair<int, int>> dq;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, number;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> number;
        dq.push_back({number, i});
    }

    while (!dq.empty()) {
        int move_value = dq.front().first;
        int index = dq.front().second;
        dq.pop_front();
        cout << index << " ";
        if (move_value > 0) {
            for (int j = 1; j < move_value; j++) {
                dq.push_back({dq.front().first, dq.front().second});
                dq.pop_front();
            }
        } else {
            for (int j = 1; j <= abs(move_value); j++) {
                dq.push_front({dq.back().first, dq.back().second});
                dq.pop_back();
            }
        }
    }


}