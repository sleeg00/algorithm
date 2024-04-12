/*
#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;

int N;
string first_str;
string fire;

stack<pair<char, int>> first_stack;
stack<char> answer;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> first_str >> fire;

    int cnt = 0;

    for (int i = 0; i < first_str.length(); i++) {
        first_stack.push({first_str[i], cnt});

        char stack_top = first_stack.top().first;
        int check = first_stack.top().second;
        if (stack_top == fire[check]) {
            first_stack.pop();
            first_stack.push({stack_top, check+1});
            cnt++;
            if (cnt == fire.length()) {
                for (int j = 1; j <= cnt; j++) {
                    first_stack.pop();
                }
                if (!first_stack.empty()) {
                    cnt = first_stack.top().second;
                } else {
                    cnt = 0;
                }
            }
        } else {
            if (cnt > 0) {
                first_stack.pop();
                i--;
            }
            cnt = 0;
        }
    }
    if (first_stack.empty()) {
        cout << "FRULA";
    } else {
        while (!first_stack.empty()) {
            answer.push(first_stack.top().first);
            first_stack.pop();
        }
        while (!answer.empty()) {
            cout << answer.top();
            answer.pop();
        }
    }
}
 */