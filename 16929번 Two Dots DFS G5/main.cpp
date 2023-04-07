#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>

using namespace std;


char ch[50][50];
int n,m;
int dx[4]={0, 0, -1, 1};
int dy[4]= {-1, 1, 0, 0};
int visit[51][51];
int resultX;
int resultY;
int sw=0;
void dfs(int x, int y) {


    if(sw==1)
        return ;
    else {
        for (int i = 0; i < 4; i++) {
            int getX = x + dx[i];
            int getY = y + dy[i];
            if(ch[getX][getY]==ch[x][y]) {
                if (!visit[getX][getY] && getX >= 0 && getY >= 0) {
                    if(visit[x][y]==0)
                        visit[x][y]++;
                    visit[getX][getY] = visit[getX][getY] + visit[x][y] + 1;
                    dfs(getX, getY);
                }
                else if(visit[x][y]-visit[getX][getY]>=3 && sw==0) {
                    sw=1;
                    printf("Yes");
                    return ;
                }
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++) {
        scanf("%s", &ch[i]);
    }

   for(int i=0; i<n; i++) {
       for(int j=0; j<m; j++) {
           resultX = i;
           resultY=j;
           dfs(i, j);
       }
   }

   if(sw==0)
       printf("No");


}