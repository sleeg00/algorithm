#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
int arr[301][301];
int visit[301][301];
int mv[4][2] = {{0,  1},
                {0,  -1},
                {1,  0},
                {-1, 0}};

void dfs(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int dx = x+mv[i][0];
        int dy = y+mv[i][1];
        if(dx>=0 && dy>=0 && dx<N && dy<M) {
            if(visit[dx][dy]==0 && arr[dx][dy]<=0) {
                visit[x][y]=1;
                if(arr[x][y]>0) arr[x][y]--;
            } else if(visit[dx][dy]==0 && arr[dx][dy]>0){
                visit[dx][dy]=1;
                dfs(dx,dy);
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    int value=0;
    while (true) {
        int cnt=0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (visit[i][j] == 0 && arr[i][j]>0) {
                    cnt++;
                    visit[i][j] = 1;
                    dfs(i, j);
                }
            }
        }

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                visit[i][j]=0;
            }
        }
        if(cnt==0) {
            cout << 0;
            return 0;
        }
        if(cnt>=2) {
            cout << value;
            return 0;
        }
        value++;
    }
}