// 이동할 수 있는 칸
// 인접한 칸 [4][2]
// 최소한의 칸 -> BFS
/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, M;
int a[101][101];
int visit[101][101];
int mv[4][2] = {{-1, 0},
                {1,  0},
                {0,  -1},
                {0,  1}};

void bfs(int x, int y) {
    visit[x][y] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    while (!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        if (x1 == N - 1 && y1 == M - 1) {
            cout << visit[x1][y1];
            return;
        }
        for (int i = 0; i < 4; i++) {
            int dx = x1 + mv[i][0];
            int dy = y1 + mv[i][1];

            if (a[dx][dy] == 1 && visit[dx][dy] == 0) {
                visit[dx][dy] = visit[x1][y1] + 1;
                q.push(make_pair(dx, dy));
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> str;
        for (int j = 0; j < M; j++) {
            a[i][j] = str[j]-'0';
        }
    }
    bfs(0, 0);
}
 */