// N*M
// 2초 -> 2억
// SET으로 알파벳 판별
// 상하좌우 탐색 -> 같지 않으면 SET에 추가
// 하고 지우기
// cnt랑 max랑 비교후 출력

/*
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int N, M;
int mv[4][2] = {{-1, 0},
                {1,  0},
                {0,  -1},
                {0,  1}};
int visit[21][21] = {0};
char a[21][21];
int check[50]={0};
int cnt=0, ma=0;
void dfs(int x, int y) {
    visit[x][y] = 1;
    check[a[x][y] - 'A'] = 1;
    for (int i = 0; i < 4; i++) {
        int dx = x + mv[i][0];
        int dy = y + mv[i][1];
        if (dx >= 0 && dx < N && dy >= 0 && dy < M) {
            if (visit[dx][dy] == 0 && check[a[dx][dy]-'A'] == 0) {
                cnt++;
                if (cnt>ma) {
                    ma=cnt;
                }
                check[a[dx][dy]-'A'] = 1;
                visit[dx][dy] +=visit[x][y];
                dfs(dx, dy);
                visit[dx][dy] = 0;
                check[a[dx][dy]-'A'] = 0;
                cnt--;
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
        }
    }


    dfs(0, 0);

    cout << ma+1;
}
 */