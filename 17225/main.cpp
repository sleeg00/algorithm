#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int N;
int arr[100000];
string str;
set<int> st;
int answer = 0;
int cnt = 0;
bool visit[100000];
set<string> k;

void sol(string s) {
    if (s.length() >= str.length()) {
        if (s == str) {
            answer++;
        }
        return;
    } else {
        for (int i = 0; i < cnt; i++) {
            if (s + to_string(arr[i]) == to_string(arr[i]) + s) {
                sol(s + to_string(arr[i]));
            } else {
                sol(s + to_string(arr[i]));
                sol(to_string(arr[i]) + s);
            }
        }
    }

}

int main(void) {
    cin >> N;
    str = to_string(N);
    if (N == 0) {
        arr[cnt++] = 0;
    } else {
        while (N != 0) {
            int nmg = N % 10;
            N = N / 10;
            if (st.find(nmg) == st.end()) {
                st.insert(nmg);
                arr[cnt++] = nmg;
            }
        }
    }

    sol("");
    cout << answer;
}