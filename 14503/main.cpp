/*
#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
int arr[101][101];
int mv[4][2] = {{-1, 0},
                {0,  1},
                {1,  0},
                {0,  -1}};

void getRobot(int x, int y, int where) {
    int visit[101][101];
    int check = 0;
    while (true) {
        int sw = 0;
        if (visit[x][y] == 0) {
            visit[x][y] = 1;
            check++;
        }

        for (int i = 0; i < 4; i++) { // 주변 4칸 중 청소되지 않은 빈칸이 있는 경우
            int dx = x + mv[i][0];
            int dy = y + mv[i][1];
            if (dx >= 0 && dy >= 0 && dx < N && dy < M) {
                if (arr[dx][dy] == 0 && visit[dx][dy] == 0) {
                    sw = 1;
                    if (where == 0) { // 회전
                        where = 3;
                    } else {
                        where -= 1;
                    }
                    break;
                }
            }
        }

        if (sw == 0) { // 주변 4칸 중 청소 되지 않은 빈칸이 엾는 경우
            int move_x = x - mv[where][0];
            int move_y = y - mv[where][1];
            if (move_x >= 0 && move_y >= 0) {
                if (arr[move_x][move_y] == 0) {
                    x = move_x;
                    y = move_y;
                } else {
                    break;
                }
            } else {
                break;
            }
        } else {
            int move_x = x + mv[where][0];
            int move_y = y + mv[where][1];
            if (move_x >= 0 && move_y >= 0 && move_x<N && move_y<M) {
                if (visit[move_x][move_y] == 0 && arr[move_x][move_y] == 0) {
                    x = move_x;
                    y = move_y;
                }
            }
        }
    }
    cout << check;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y, where;
    cin >> N >> M;
    cin >> x >> y >> where;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    getRobot(x, y, where);
}
 */