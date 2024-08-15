#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[1001][1001];
int visit[1001][1001];
int mv[4][2] = {{0,  1},
                {0,  -1},
                {1,  0},
                {-1, 0}};
queue<pair<int, int>> q;
int ma = 0;
int cnt = 0;

void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int dx = x + mv[i][0];
            int dy = y + mv[i][1];
            if (dx >= 0 && dy >= 0 && dx < N && dy < M) {
                if (arr[dx][dy] == 0 && visit[dx][dy] == 0) {
                    visit[dx][dy] = visit[x][y] + 1;
                    ma = max(visit[dx][dy], ma);
                    q.push({dx, dy});
                    cnt++;
                }
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);


    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                visit[i][j] = 1;
                q.push({i, j});
            } else if (arr[i][j] == 0) {
                cnt--;
            }
        }
    }
    if (cnt == 0) {
        cout << 0;
    } else {
        bfs();
        if (cnt == 0) {
            cout << ma - 1;
        } else {
            cout << -1;
        }
    }
}