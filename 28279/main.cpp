/*
#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

// 1. X : 정수 X를 덱에 넣는다.
// 2. X : 정수 X를 덱 뒤에 넣는다
// 3. 덱 정수 없으면 -1 있으면 정수 뺴고 출력
// 4. 덱 정수 있으면 맨 뒤 정수 빼고 출력 아니면 -1
// 5. 덱 정수 개수 출력
// 6. 덱 비어있으면 1 아니면 0 출력
// 7. 덱 정수 존재시 맨 앞 정수 출력 없다면 -1 출력
// 8. 덱 정수 존재시 맨 뒤 정수 출력 없다면 -1 출력

int N;
deque<int> dq;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    int com;
    int number;
    for (int i = 1; i <= N; i++) {
        cin >> com;
        if (com == 1 || com == 2) {
            cin >> number;
            if (com == 1) {
                dq.push_front(number);
            } else {
                dq.push_back(number);
            }
        } else if (com == 3) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            } else {
                cout << -1 << '\n';
            }
        } else if (com == 4) {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            } else {
                cout << -1 << '\n';
            }
        } else if (com == 5) {
            cout << dq.size() << '\n';
        } else if (com == 6) {
            if (dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (com == 7) {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else if (com == 8) {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }
}
 */