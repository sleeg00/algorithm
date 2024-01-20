// 적록색약 -> 빨강 초록 차이 못 느낌
// 빨강 초록 = 같은 구역으로 하나 아닌 구역으로 하나
// 1초라서 음..

#include <iostream>
#include <algorithm>

using namespace std;

int N;
char a[101][101];
int visit[101][101];
int weight[4][2] = {{-1, 0},
                    {1,  0},
                    {0,  -1},
                    {0,  1}};
vector<int> v;

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int dx = x + weight[i][0];
        int dy = y + weight[i][1];
        if (dx >= 0 && dx < N && dy >= 0 && dy < N) {
            if (visit[dx][dy] == 0) {
                if (a[x][y] == a[dx][dy] || (a[x][y]) - 11 == a[dx][dy] || (a[x][y] + 11) == a[dx][dy]) {
                    visit[dx][dy] = 1;
                    dfs(dx, dy);
                }
            }
        }
    }

}

void dfs2(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int dx = x + weight[i][0];
        int dy = y + weight[i][1];
        if (dx >= 0 && dx < N && dy >= 0 && dy < N) {
            if (visit[dx][dy] == 0) {
                if (a[x][y] == a[dx][dy]) {
                    visit[dx][dy] = 1;
                    dfs2(dx, dy);
                }
            }
        }
    }

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (visit[i][j] == 0) {
                visit[i][j] = 1;
                dfs2(i, j);
                cnt++;
            }
        }
    }

    v.push_back(cnt);
    cnt = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            visit[i][j] = 0;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (visit[i][j] == 0) {
                visit[i][j] = 1;
                dfs(i, j);
                cnt++;
            }
        }
    }

    v.push_back(cnt);
    for (auto itr = v.begin(); itr!=v.end(); itr++) {
        cout << *itr <<" ";
    }
}