#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
int visit[10][10];
int arr[10][10];
int mv[4][2] = {{0,  1},
                {0,  -1},
                {1,  0},
                {-1, 0}};
queue<pair<int, int>> q;
int ma = 2147483647;
vector<pair<int, int>> v;

void dfs(int x, int y, int cnt) {
    if (cnt == 3) {
        int check = 0;
        while (!q.empty()) {
            int front_x = q.front().first;
            int front_y = q.front().second;
            check++;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int dx = front_x + mv[i][0];
                int dy = front_y + mv[i][1];
                if (dx >= 0 && dy >= 0 && dx < N && dy < M) {
                    if (visit[dx][dy] == 0 && arr[dx][dy] == 0) {
                        visit[dx][dy] = 2;
                        q.push({dx, dy});
                    }
                }
            }
        }
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                visit[i][j] = 0;
        ma = min(check, ma);

        for (int i = 0; i < v.size(); i++) {
            q.push({v[i].first, v[i].second});
        }
    } else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j] == 0 && cnt != 3) {
                    arr[i][j] = 1; // 벽
                    dfs(i, j, cnt + 1);
                    arr[i][j] = 0; // 벽 삭제
                }
            }
        }
    }
}

int main(void) {
    int cnt = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                v.push_back({i, j});
                q.push({i, j});
            } else if (arr[i][j] == 1) {
                cnt++;
            }
        }
    }
    dfs(0, 0, 0);
    cout << (N * M) - cnt - ma-3;
}