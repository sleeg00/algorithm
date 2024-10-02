#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// 괄호 문자열
// 두 개의 괄호 기호인 "(", ")"
// Valid PS, VPS => 올바른 괄호 문자열
// "()" 문자열은 기본 VPS 이라고 부른다.
// x 가 VPS 라면 ("x") => VPS
// xy => VPS
// 결국 ()가 정사적인지 판단하느 문제
string str;
int N;
queue<char> q;
queue<char> ans;
int main(void) {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> str;
        for(int j=0; j<str.size(); j++) {
            q.push(str[j]);
        }
        for(int j=0; j<str.size(); j++) {
            if(ans.size()==0) {
                ans.push(q.front());
                q.pop();
            } else {
                if(q.front()==')' && ans.front()=='(') {
                    ans.pop();
                } else {
                    ans.push(q.front());
                }
                q.pop();
            }
        }
        if(ans.size()>0) {
            cout << "NO" <<'\n';
        } else {
            cout << "YES" << '\n';
        }
        while(!q.empty()) {
            q.pop();
        }
        while(!ans.empty()) {
            ans.pop();
        }
    }
}