/*
#include <stdio.h>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;


int N;

int main() {
    string str;
    int cnt=0;
    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        stack<char> s;
        cin >> str;
        int j=0;
        while(j<str.length()) {
            s.push(str[j]);
            if (s.size()>1) {
                int check = s.top();
                s.pop();
                if(s.top()==check) {
                    s.pop();
                }else {
                    s.push(check);
                }
            }
            j++;
        }
        if (s.empty()) {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
 */