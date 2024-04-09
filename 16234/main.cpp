#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N; //N개의 줄
int L, R; //인구 이동 가능할 경우
int arr[102][102];
int visit[102][102];
int mv[4][2] = {{0,  -1},
                {0,  1},
                {-1, 0},
                {1,  0}};
int hap = 0;
int check = 0;
queue<pair<int, int>> q;

void dfs(int x, int y, int cnt) {

    q.push({x, y});
    visit[x][y] = cnt + 1;
    check++;
    for (int i = 0; i < 4; i++) {
        int dx = x + mv[i][0];
        int dy = y + mv[i][1];
        if (dx >= 0 && dy >= 0 && dx < N && dy < N) {
            if (visit[dx][dy] <= cnt)
                if(abs(arr[dx][dy] - arr[x][y]) >= L && abs(arr[dx][dy] - arr[x][y]) <= R) {
                    hap += arr[dx][dy];
                    visit[dx][dy] = cnt + 1;
                    dfs(dx, dy, cnt);
            }
        }
    }

}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int ans = 0;
    int sw = 0;
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <=2010; i++) {
        int bk=0;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                hap = arr[j][k];
                check = 0;
                if (visit[j][k] <= i) {
                    dfs(j, k, i);
                }
                if (hap==arr[j][k]) {
                    bk++;
                }
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    arr[x][y] = hap / check;
                    q.pop();
                }
                if (check != 0 && check != 1) {
                    ans++;
                }

            }
        }
        if (ans != 0) {
            sw++;
            ans = 0;
        }
        if (bk==N*N) {
            break;
        }
    }
    cout << sw;
}