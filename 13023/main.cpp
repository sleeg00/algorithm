/*
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, M;
// A B 친구
// B C 친구
// C D 친구
// D E 친구
// 5 <= N <= 2,000
// 1 <= M <= 2,000

vector<vector<int>> v;

int visit[2001];
int sw = 0;

void sol(int x, int cnt) {
    if (cnt >= 4) {
        sw = 1;
        return ;
    } else {
        for (int j = 0; j < v[x].size(); j++) {
            if (visit[v[x][j]] == 0) {
                visit[v[x][j]] = 1;
                sol(v[x][j], cnt + 1);
                visit[v[x][j]] = 0;
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int x, y;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        v.push_back(vector<int>());
    }
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for (int i = 0; i < N; i++) {
        if (sw == 0) {
            visit[i]=1;
            sol(i,0);
            visit[i]=0;
        } else {
            cout << 1;
            break;
        }
    }
    if(sw==0)
        cout << 0;
}
 */