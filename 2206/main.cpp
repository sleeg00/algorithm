/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, M;
int arr[1001][1001];
int visit[1001][1001];
int visit2[1001][1001];
int mv[4][2] = {{0,  1},
                {1,  0},
                {-1, 0},
                {0,  -1}};
queue<pair<pair<int, int>, pair<int, int>>> q;

void bfs(int x, int y) {
    visit[x][y] = 1;
    visit2[x][y] = 1;
    q.push({{0, 0},
            {x, y}});
    while (!q.empty()) {
        int temp_x = q.front().second.first;
        int temp_y = q.front().second.second;
        int cnt = q.front().first.first;
        int checkBroke = q.front().first.second;

        if (temp_x == N - 1 && temp_y == M - 1) {
            cout << cnt + 1;
            return;
        }
        q.pop();
        for (int i = 0; i < 4; i++) {
            int dx = temp_x + mv[i][0];
            int dy = temp_y + mv[i][1];
            if (dx >= 0 && dx < N && dy >= 0 && dy < M) {
                if (arr[dx][dy] == 0 && visit[dx][dy] == 0 && checkBroke==0) {
                    visit[dx][dy] = 1;
                    q.push({{cnt + 1, checkBroke},
                            {dx,      dy}});
                } else if (arr[dx][dy] == 1 && checkBroke == 0) { // 부순 적이 없다면
                    visit2[dx][dy] = 1;
                    q.push({{cnt + 1, 1},
                            {dx,      dy}});
                }
                if (checkBroke==1 && arr[dx][dy]==0 &&visit2[dx][dy]==0) {
                    visit2[dx][dy]=1;
                    q.push({{cnt + 1, checkBroke},
                            {dx,      dy}});
                }
            }
        }
    }
    cout << -1;
}


int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    char ch;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> ch;
            if (ch == '0') {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
        }
    }

    bfs(0, 0);
}
 */