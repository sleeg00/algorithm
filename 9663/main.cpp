/*
#include <algorithm>
#include <iostream>

using namespace std;

int N;
int answer = 0;
int col[16];
bool check;
void solve(int x) {
    if (N == x) {
        answer++;
    } else {
        for (int i = 0; i < N; i++) {
            col[x] = i;
            check = true;
            for(int j=0; j<x; j++) {
                if(col[x]==col[j] || abs(col[x]-col[j])==x-j) {
                    check = false;
                    break;
                }
            }
            if(check==true) {
                solve(x+1);
            }
        }
    }
}

int main(void) {
    cin >> N;
    solve(0);
    cout << answer;
}
 */