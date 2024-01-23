// 100 * 100
// X는 Y의 부모 번호
// 1, 2 라면 2와 1은 1촌
// 1은 2의 부모 번호
// 2는 1의 아들, 딸
// 1, 3 -> 3는 1의 아들, 딸
// 7, 3

//트리 처럼 따라가 cnt ==세기

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N,M,a,b;
int arr[101][101];
int visit[101]={0};
void bfs(int x, int y) {
    queue<int> q;
    q.push(x);
    visit[x]=1;
    while(!q.empty()) {
        int k = q.front();
        q.pop();
        for (int i=1; i<=N; i++) {
            if (arr[k][i]==1 && visit[i]==0) {
                visit[i] = visit[k]+1;
                q.push(i);
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x,y;

    cin >> N;
    cin >> a >>b;
    cin >> M;

    for (int i=0; i<M; i++) {
        cin >> x >> y;
        arr[x][y]=1;
        arr[y][x]=1;
    }

    bfs(a,b);
    if (visit[b]==0) {
        cout << -1;
    } else {
        cout << visit[b]-1;
    }
}