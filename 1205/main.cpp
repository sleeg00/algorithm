/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int a[1001][1001];
int visit[1001][1001];
int mv[4][2] = {
        {0,  1},
        {0,  -1},
        {1,  0},
        {-1, 0}
};
queue<pair<int, int>> q;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 2) {
                x = i;
                y = j;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                visit[i][j] = 0;
            } else {
                visit[i][j] = -1;
            }
        }
    }
    q.push(make_pair(x, y));
    visit[x][y] = 0;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int dx = x + mv[i][0];
            int dy = y + mv[i][1];
            if (dx >= 0 && dy >= 0 && dx < n && dy < m) {
                if (a[dx][dy] == 1 && visit[dx][dy] == -1) {
                    visit[dx][dy] = visit[x][y] + 1;
                    q.push(make_pair(dx, dy));
                } else if (a[dx][dy] == 0) {
                    visit[dx][dy] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << visit[i][j] << " ";
        }
        if (i != n - 1)
            cout << endl;
    }
    return 0;
}
 */