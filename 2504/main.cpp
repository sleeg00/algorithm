#include <algorithm>
#include <iostream>
#include <stack>

using namespace std;
// 괄호의 값
string str;
stack<string> s;
stack<char> st;
int main(void) {
    cin >> str;

    int i = 0;
    while (true) {
        if (str[i] == '(') {
            st.push('(');
        } else if (str[i] == '[') {
            st.push('[');
        } else if (!st.empty()) {
            if (str[i] == ')' && st.top() =='(') {
                st.pop();
            }
            else if (str[i] == ']' && st.top() == '[') {
                st.pop();
            } else {
                cout << 0;
                return 0;
            }
        } else {
            cout <<0;
            return 0;
        }
        i++;
        if (i > str.size() - 1) break;
    }
    if(!st.empty()) {
        cout <<0;
        return 0;
    }
    i = 0;
    while (true) {
        if (str[i] == '(') {
            s.push("(");
        } else if (str[i] == '[') {
            s.push("[");
        } else if (str[i] == ')' && s.top() == "(") {
            s.pop();
            s.push("2");
        } else if (str[i] == ']' && s.top() == "[") {
            s.pop();
            s.push("3");
        } else if (str[i] == ')' && s.top() != "[" && s.top() != "]" && s.top() != ")" && s.top() != "(") {
            int value = 0;
            while (s.top() != "(") {
                value += (stoi(s.top()));
                s.pop();
                if (s.top() == to_string('(')) break;

            }
            s.pop();
            value *= 2;
            s.push(to_string(value));
        } else if (str[i] == ']' && s.top() != "[" && s.top() != "]" && s.top() != ")" && s.top() != "(") {
            int value = 0;
            while (s.top() != "[") {
                value += (stoi(s.top()));
                s.pop();
                if (s.top() == to_string('[')) break;
            }
            s.pop();
            value *= 3;
            s.push(to_string(value));
        }
        i++;
        if (i > str.size() - 1) {
            break;
        }
        if (s.empty()) {
            break;
        }
    }
    int hap = 0;
    while (!s.empty()) {
        hap += stoi(s.top());
        s.pop();
    }
    cout << hap;
}