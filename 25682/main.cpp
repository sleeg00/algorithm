#include <iostream>
#include <algorithm>

using namespace std;

int N, M, K;
char ch;
int a[2001][2001];
int black[2001][2001];
int white[2001][2001];
int cnt=2147483647;
int main(void) {
    cin >> N >> M >> K;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            scanf("\n%c", &ch);
            if (ch == 'B') {
                a[i][j] = 1; // black = 1
            } else {
                a[i][j] = 0; // white = 0
            }
            if ((i + j) % 2 == 0) { // black
                black[i][j] = 1;
                white[i][j] = 0;
            } else {
                black[i][j] = 0;
                white[i][j] = 1;
            }
            if (a[i][j] == black[i][j]) {
                black[i][j] = 0;
                white[i][j] = 1;
            } else {
                black[i][j] = 1;
                white[i][j] = 0;
            }
        }
    }
    int hap = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            black[i][j] += black[i - 1][j] + black[i][j - 1] - black[i - 1][j - 1];
            white[i][j] += white[i - 1][j] + white[i][j - 1] - white[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= N-K+1; i++) {
        for (int j = 1; j <= M-K+1; j++) {
            cnt = min(cnt, (black[i+K-1][j+K-1]-black[i+K-1][j-1]-black[i-1][j+K-1]+black[i-1][j-1]));
            cnt = min(cnt, (white[i+K-1][j+K-1]-white[i+K-1][j-1]-white[i-1][j+K-1]+white[i-1][j-1]));
        }
    }
    cout << cnt;
}