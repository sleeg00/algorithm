/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<pair<int, int>> v;
int arr[101][101];
int ma = 2147483646;
int mv[4][2] = {{0,  1},
                {-1, 0},
                {0,  -1},
                {1,  0}};

void check(int x, int y, int move) {
    move %= 4;
    while (true) {
        int dx = x + mv[move][0];
        int dy = y + mv[move][1];
        x = dx;
        y = dy;
        if (dx < 0 || dy < 0 || dx >= N || dy >= M)
            return;
        if (arr[dx][dy] == 6)
            return;
        if (arr[dx][dy] != 0)
            continue;
        arr[dx][dy] = 10;
    }
}

void dfs(int index) {
    int cnt = v.size();
    if (index == cnt) {
        int checkCnt = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j] == 0)
                    checkCnt++;
            }
        }
        ma = min(checkCnt, ma);
        return;
    }
    int x = v[index].first;
    int y = v[index].second;
    int copy[8][8];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            copy[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                copy[j][k] = arr[j][k];
            }
        }

        if (arr[x][y] == 1) {
            check(x, y, i);
        } else if (arr[x][y] == 2) {
            check(x, y, i);
            check(x, y, i + 2);
        } else if (arr[x][y] == 3) {
            check(x, y, i);
            check(x, y, i + 1);
        } else if (arr[x][y] == 4) {
            check(x, y, i);
            check(x, y, i + 1);
            check(x, y, i + 2);
        } else if (arr[x][y] == 5) {
            check(x, y, i);
            check(x, y, i + 1);
            check(x, y, i + 2);
            check(x, y, i + 3);
        }
        dfs(index + 1);
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < M; k++) {
                arr[j][k] = copy[j][k];
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] >= 1 && arr[i][j] <= 5) {
                v.push_back({i, j});
            }
        }
    }
    dfs(0);
    cout << ma;
}
 */