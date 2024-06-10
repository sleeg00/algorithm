/*
#include <algorithm>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

string str;
stack<char> s;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '<') {
            while (!s.empty()) {
                cout << s.top();
                s.pop();
            }
            while (true) {
                cout << str[i];
                if (str[i] == '>') {
                    break;
                }
                i++;
            }
        } else if (str[i] == ' ') {
            while (!s.empty()) {
                cout << s.top();
                s.pop();
            }
            cout << " ";
        } else {
            s.push(str[i]);
        }
    }
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
 */