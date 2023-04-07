#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

int n;
int x, y;
vector<int> v[5000];
int visit[5000][5000];
int result[5000];
int cnt=0;
int a[5000];
void dfs(int x, int check, int dap ) {
    if(x==dap && check!=0) {
        a[x]=cnt;
        cnt=0;
        return;
    }
    else {
        for(int i=0; i<v[x].size(); i++) {
            int y = v[x][i];

            if(!visit[x][y] && y!=check) {
                visit[x][y]++;
                result[y]++;
                if (result[y] >= 2) {
                    cnt++;
                }
                dfs(y, x, dap);
                visit[x][y]--;
                result[y]--;
            }
        }
    }
}
int main() {

    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++) {
        dfs(i, 0, i);
    }
    for(int i=1; i<=n; i++)
        printf("%d ", a[i]);
    return 0;
}