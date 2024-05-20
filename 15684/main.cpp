#include <algorithm>
#include <iostream>

using namespace std;

int N, M, X, Y, K;
int arr[101][101];
int order[1001];
int check[101];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M >> X >> Y >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < K; i++) {
        cin >> order[i];
    }

    for (int i = 0; i < K; i++) {
        int move = order[i];
        int dx = X;
        int dy = Y;
        int sw = 0;

        if (move == 4) {// south
            dx = X + 1;
            if (dx < N) {
                if (arr[dx][dy] == 0) {

                    int im = check[2];
                    check[2] = check[1];
                    check[1] = check[0];
                    check[0] = check[3];
                    check[3] = im;
                    arr[dx][dy] = check[3];

                } else {
                    check[2] = check[1];
                    check[1] = check[0];
                    check[0] = check[3];
                    check[3] = arr[dx][dy];
                    arr[dx][dy] = 0;
                }
                X = dx;
            } else {
                sw = 1;
            }
        } else if (move == 3) { // north
            dx = X - 1;
            if (dx >= 0) {
                if (arr[dx][dy] == 0) {

                  int im = check[0];
                    check[0] = check[1];
                    check[1] = check[2];
                    check[2] = check[3];
                    check[3] = im;  arr[dx][dy] = check[3];
                } else {
                    check[0] = check[1];
                    check[1] = check[2];
                    check[2] = check[3];
                    check[3] = arr[dx][dy];
                    arr[dx][dy] = 0;
                }
                X = dx;
            } else {
                sw = 1;
            }

        } else if (move == 2) { // west
            dy = Y - 1;
            if (dy >= 0) {
                if (arr[dx][dy] == 0) {

                    int im =check[4];
                    check[4] = check[1];
                    check[1] = check[5];
                    check[5] = check[3];
                    check[3] = im;  arr[dx][dy] = check[3];

                } else {
                    check[4] = check[1];
                    check[1] = check[5];
                    check[5] = check[3];
                    check[3] = arr[dx][dy];
                    arr[dx][dy] = 0;
                }
                Y = dy;
            } else {
                sw = 1;
            }

        } else if (move == 1) { // east
            dy = Y + 1;
            if (dy < M) {
                if (arr[dx][dy] == 0) {

                    int im = check[5];
                    check[5] = check[1];
                    check[1] = check[4];
                    check[4] = check[3];
                    check[3] = im; arr[dx][dy] = check[3];
                } else {
                    check[5] = check[1];
                    check[1] = check[4];
                    check[4] = check[3];
                    check[3] = arr[dx][dy];
                    arr[dx][dy] = 0;
                }
                Y = dy;
            } else {
                sw = 1;
            }
        }
        if (sw == 0) {
            cout  <<check[1] << endl;
        }
    }

}