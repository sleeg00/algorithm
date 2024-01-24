// 3차원 배열 queue는?

#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int L, R, C;
int mv[6][3] = {{-1, 0,  0},
                {1,  0,  0},
                {0,  -1, 0},
                {0,  1,  0},
                {0,  0,  1},
                {0,  0,  -1}};

void bfs(vector<vector<vector<char>>> &a,
         vector<vector<vector<int>>> &visit, queue<pair<int, pair<int, int>>> &q) {
    while (!q.empty()) {

        int z = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        if (a[z][x][y] == 'E') {
            cout << "Escaped in " << visit[z][x][y] - 1 << " minute(s)." << "\n";
            return;
        }
        q.pop();
        for (int i = 0; i < 6; i++) {
            int dz = z + mv[i][0];
            int dx = x + mv[i][1];
            int dy = y + mv[i][2];
            if (dz >= 0 && dz < L && dx >= 0 && dx < R && dy >= 0 && dy < C) {
                if (a[dz][dx][dy] != '#' && visit[dz][dx][dy] == 0) {
                    visit[dz][dx][dy] = visit[z][x][y] + 1;
                    q.push(make_pair(dz, make_pair(dx, dy)));
                }
            }
        }
    }
    cout << "Trapped!" << "\n";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        cin >> L >> R >> C;
        vector<vector<vector<char>>> a(31, vector<vector<char>>(31, vector<char>(31, 0)));
        vector<vector<vector<int>>> visit(31, vector<vector<int>>(31, vector<int>(31, 0)));
        queue<pair<int, pair<int, int>>> q;
        for (int i = 0; i < L; i++) {
            for (int j = 0; j < R; j++) {
                for (int k = 0; k < C; k++) {
                    cin >> a[i][j][k];
                    if (a[i][j][k] == 'S') {
                        q.push(make_pair(i, make_pair(j, k)));
                        visit[i][j][k] = 1;
                    }
                }
            }
        }
        if (L == 0 && R == 0 && C == 0) {
            break;
        } else {
            bfs(a, visit, q);
        }

    }
}