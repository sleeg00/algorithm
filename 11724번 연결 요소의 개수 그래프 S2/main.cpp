#include <stdio.h>
#include <stack>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n,m,x,y;
vector<int> v[1001];
bool visit[1001];
int cnt=0;

void dfs(int start) {
    queue<int> q;
    q.push(start);
    visit[start]=true;

    while(!q.empty()) {

        int x= q.front();
        q.pop();

        for(int i=0; i<v[x].size(); i++) {
            int y=v[x][i];
            if(!visit[y]) {
                q.push(y);
                visit[y]=true;

            }
        }
    }

}

int main() {
    scanf("%d %d", &n, &m);

    for(int i=1; i<=m; i++) {
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }


    for(int i=1; i<=n; i++) {
        if(!visit[i]){
            dfs(i);
            cnt++;
        }

    }
    printf("%d", cnt);
}