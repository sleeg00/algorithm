/*
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int R, C;
int arr[1002][1002];
int visit[1002][1002];
int x, y, fireX, fireY;
int mv[4][2] = {{0,  -1},
                {0,  1},
                {1,  0},
                {-1, 0}};
queue<pair<int, pair<int, int>>> jh;
queue<pair<int, pair<int, int>>> fire;

int bfs(int x, int y) {
    jh.push({0, {x, y}});
    visit[x][y] = 1;
    while (!jh.empty()) {
        int jh_x = jh.front().second.first;
        int jh_y = jh.front().second.second;
        int value = jh.front().first;
        if (!fire.empty()) {
            while (value == fire.front().first) {
                int fire_value = fire.front().first;
                int fire_x = fire.front().second.first;
                int fire_y = fire.front().second.second;
                fire.pop();
                for (int i = 0; i < 4; i++) {
                    int dx = fire_x + mv[i][0];
                    int dy = fire_y + mv[i][1];
                    if (dx >= 0 && dy >= 0 && dx < R && dy < C) {
                        if (arr[dx][dy] == 0) {
                            visit[dx][dy] = 1;
                            fire.push({fire_value + 1, {dx, dy}});
                            arr[dx][dy] = 1;
                        }
                    }
                }
                if (fire.empty()) {
                    break;
                }
            }
        }
        if (jh_x == R - 1 || jh_y == C - 1 || jh_y == 0 || jh_x == 0) {
            cout << value + 1;
            return 1;
        }
        jh.pop();
        for (int i = 0; i < 4; i++) {
            int dx = jh_x + mv[i][0];
            int dy = jh_y + mv[i][1];
            if (dx >= 0 && dy >= 0 && dx < R && dy < C) {
                if (arr[dx][dy] == 0 && visit[dx][dy] == 0) {
                    visit[dx][dy] = 1;
                    jh.push({value + 1, {dx, dy}});
                }
            }
        }

    }
    return 0;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    char ch;
    cin >> R >> C; // 6 // 4
    bool check = false;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> ch;
            if (ch == '#') {
                arr[i][j] = 1;
                visit[i][j] = 1;
            } else if (ch == '.') {
                arr[i][j] = 0;
                visit[i][j] = 0;
            } else if (ch == 'J') {
                x = i;
                y = j;
                check = true;
            } else if (ch == 'F') {
                arr[i][j] = 1;
                fireX = i;
                fireY = j;
                visit[i][j] = 1;
                fire.push({0, {i, j}});
            }
        }
    }

    if (check == false) {
        cout << "IMPOSSIBLE";
        return 0;
    } else if (bfs(x, y) == 0) {
        cout << "IMPOSSIBLE";
    }
}
 */