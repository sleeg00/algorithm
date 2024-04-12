#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[202][202];
int vacation[1002];
int visit[202][202];
int ans = 0;
queue<pair<int, pair<int, int>>> pq;
int ch[202];
int bfs(int x) {
    pq.push({0, {x, 1}});

    while (!pq.empty()) {
        int cnt = pq.front().first;
        int temp = pq.front().second.first;
        int check = pq.front().second.second;
        pq.pop();
        if (ch[temp] == 1) {
            ch[temp]=0;
            ans--;
        }
        if (ans==0) {
            return 1;
        } else {
            for (int i = 1; i <= N; i++) {
                if (arr[temp][i] == 1) {
                    if (visit[temp][i] == 0) {
                        visit[temp][i] = 1;
                        pq.push({cnt + 1, {i, check}});
                    } else if (ch[i]==1) {
                        visit[temp][i] = 1;
                        pq.push({cnt + 1, {i, check}});
                    }
                }
            }
        }
    }
    return 0;
}

int main(void) {

    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= M; i++) {
        cin >> vacation[i];
        ch[vacation[i]] = 1;
    }
    for (int i = 1; i <= N; i++) {
        if (ch[i] == 1) {
            ans++;
        }
    }
    if (bfs(vacation[1]) == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}