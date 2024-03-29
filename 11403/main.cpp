// 경로 찾기


// 3
// 1 -> 2  = 1,    1 ->3 0 ,  2 -> 1 =0, 2->3 =1,   3->1 =1, 3->2 =0 3->3=0
// 가능한 경우만 찾으면 됨

/*
#include <iostream>
#include <algorithm>

using namespace std;

int N;
int a[101][101] = {0}, v[101] = {0};
int check[101][101] = {0};

void DFS(int i, int j) {
    check[i][j] = 1;
    int x = j;
    for (int y = 0; y < N; y++) {
        if (a[x][y] == 1 && v[y] == 0 && check[i][y]==0) {
            v[y] = 1;
            DFS(i, y);
            v[y] = 0;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i][j] == 1 && v[j]==0 && check[i][j]==0) {
                v[j]=1;
                DFS(i, j);
                v[j]=0;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << check[i][j] << " ";
        }
        cout << "\n";
    }
}
 */