// 1~9
// 0,0
// X 만큼 이동
// 빠지면 종료

// DFS 50 * 50
// H가 아닐 때 cnt ++ 최대 많은 것 출력
// 이동한 곳이라면 가지 않음
/*
#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
char a[51][51];
int visit[51][51];
int dp[51][51];
int circle;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int dfs(int x, int y) {
    if (a[x][y] == 'H')
        return 0;
    if (x < 0 || x >= N || y < 0 || y >= M)
        return 0;
    if (visit[x][y]) {
        circle = true;
        return -1;
    }
    if (dp[x][y] != -1)
        return dp[x][y];
    dp[x][y] = 0;
    visit[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i] * (a[x][y] - '0');
        int yy = y + dy[i] * (a[x][y] - '0');

        dp[x][y] = max(dp[x][y], dfs(xx, yy) + 1);
    }
    visit[x][y] = 0;
    return dp[x][y];
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    memset(dp, -1, sizeof(dp));
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = dfs(0, 0);
    if (circle) {
        cout << -1;
    } else {
        cout << cnt;
    }
}
 */