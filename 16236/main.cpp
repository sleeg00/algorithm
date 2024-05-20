/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, K, L;
int arr[101][101];
queue<pair<int, char>> q;
int visit[101][101];
int mv[4][2] = {{0,  1},
                {0,  -1},
                {1,  0},
                {-1, 0}};
queue<pair<int,int>> sq;
void getGameOverTime(int x, int y) {
    int time = 0;
    visit[x][y] = 1;
    int where = 0;
    sq.push({x,y});
    int change_time = q.front().first;
    char change_move = q.front().second;

    while (true) {

        if(!q.empty()) {
            if (change_time == time) {
                if (change_move == 'D') {
                    if (where == 0) {
                        where = 2;
                    } else if (where == 1) {
                        where = 3;
                    } else if (where == 2) {
                        where = 1;
                    } else {
                        where = 0;
                    }
                } else if (change_move == 'L') {
                    if (where == 0) {
                        where = 3;
                    } else if (where == 1) {
                        where = 2;
                    } else if (where == 2) {
                        where = 0;
                    } else {
                        where = 1;
                    }
                }
                q.pop();
                if (!q.empty()) {
                    change_time = q.front().first;
                    change_move = q.front().second;
                }
            }
        }
        int dx = x + mv[where][0];
        int dy = y + mv[where][1];
        if (dx >= 1 && dy >= 1 && dx <=N && dy <=N) {
            if (visit[dx][dy] == 0) {
                visit[dx][dy] = 1;
                if (arr[dx][dy] == 0) {//사과 없을 때
                    visit[sq.front().first][sq.front().second] = 0;
                    sq.pop();
                } else {
                    arr[dx][dy]=0;
                }
                sq.push({dx,dy});
                x=dx;
                y=dy;
                time++;
            } else {
                cout << time+1;
                return;
            }
        } else {
            break;
        }
    }
    cout << time+1;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> K;
    int x, y;
    int X;
    char C;
    for (int i = 0; i < K; i++) {
        cin >> x >> y;
        arr[x][y] = 1;
    }
    cin >> L;
    for (int i = 0; i < L; i++) {
        cin >> X >> C;
        q.push({X, C});
    }
    getGameOverTime(1, 1);
}
 */