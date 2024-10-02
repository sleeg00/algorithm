/*
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
using namespace std;
// 2초
// 1 ~ N
// k <= N
// K번째 사람 제거
// 원을 따라 계속한다.
// (7,3) 7명의 사람, 3번째 사람 제거 // 7명의 사람이 모두 제거될 때 까지한다.
// 1, 2, 3, 4, 5, 6, 7
// 3번 제거
// 1, 2, 4, 5, 6, 7
// 1, 2, 4, 5, 7
// 1, 4, 5, 7
// 1, 4, 5
// 5, 1, 4
int N, K;
queue<int> q;
queue<int> s;
vector<int> ans;

int main(void) {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        int value;

        if (q.size() >= K) {
            for (int i = 1; i <= K; i++) {
                value = q.front();
                s.push(value);
                q.pop();
            }
            while (!s.empty()) {
                if (s.size() != 1)
                    q.push(s.front());
                s.pop();
            }
            ans.push_back(value);
        } else {

            int second_k;
            second_k = K-(K/q.size())*q.size();
            if(second_k==0) {
                second_k = q.size();
            }
            for (int i = 1; i <= second_k; i++) {
                value = q.front();
                s.push(value);
                q.pop();
            }
            while (!s.empty()) {
                if (s.size() != 1)
                    q.push(s.front());
                s.pop();
            }
            ans.push_back(value);
        }
    }
    string str = "<";
    for (int i = 0; i < ans.size(); i++) {
        str += to_string(ans[i]) + ", ";
    }
    str = str.substr(0, str.size() - 2);
    cout << str << ">";
}
 */