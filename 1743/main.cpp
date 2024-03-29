// 100 * 100 사이즈 DFS -> 1초, 음식물 개수 <=100 -> 10초?...
// 3 (통로 길이),  4 (가로 길이),  5(음식물 개수)
//   1 2 3 4
// 1 1 0 0 0
// 2 0 1 1 0
// 3 1 1 0 0
// -> 상하 좌우만 합쳐질 수 있다.
// 1.
//   1 2 3 4
// 1 1 0 0 0
// 2 0 1 1 0
// 3 1 2 0 0
// 가장 큰 움식물 크기 -> 4?

// 1의 상하좌우를 검색 후 +1 있는 만큼 +1 시킨다. -> 안됨 따라가야함.
// 1의 상화좌우를 검색 후 해당 좌표로 이동 계속해서 찾음 근처에 있는 것을
// 찾은 후 1의 개수만큼 +1 시킨다. -> 최적화 가능 -> 이동하면서 더하는 방법 돌아오면서 4 입력 방문 표시 재방문 X
/*
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, K;
int a[101][101] = {0}, visit[101][101] = {0};
int dxy[4][2] = {{-1, 0}, // -> 상하 좌우
                 {1,  0},
                 {0,  -1},
                 {0,  1}};
int ma=-1;
void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int searchX = x + dxy[i][0];
        int searchY = y + dxy[i][1];
        if (searchX >= 1 && searchX <= N && searchY >= 1 && searchY <= M) {
            if (a[searchX][searchY] == 1 && visit[searchX][searchY] == 0) {
                visit[searchX][searchY] = 1;
                dfs(searchX, searchY);
                a[x][y] += a[searchX][searchY];
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y;
    cin >> N >> M >> K;

    for (int i = 0; i < K; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (a[i][j] == 1 && visit[i][j] == 0) {
                visit[i][j] = 1;
                dfs(i, j);
                if (a[i][j] > ma) {
                    ma=a[i][j];
                }
            }
        }
    }
    cout << ma;
}
 */