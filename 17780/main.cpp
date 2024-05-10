/*
#include<iostream>
#include<algorithm>
#include <queue>

using namespace std;

int N,M;
char arr[1001][1001];
queue<pair<int,pair<int,int>>> ghost;
queue<pair<int,pair<int,int>>> user;
int x, y;
int visit[1001][1001];
int ghost_visit[1001][1001];
int mv[4][2] = {{1,0}, {-1,0} , {0,1}, {0,-1}};
void bfs() {
    while(!user.empty()) {
        int check_index = user.front().first;
        int user_x = user.front().second.first;
        int user_y = user.front().second.second;
        user.pop();
        for(int i=0; i<4; i++) {
            int dx = user_x + mv[i][0];
            int dy = user_y + mv[i][1];
            if(visit[dx][dy]==0 && arr[dx][dy]!='#' && dx>=0 && dy>=0 && dx<N && dy<M && ghost_visit[dx][dy]==0) {
                visit[dx][dy]=1;
                user.push({check_index+1, {dx,dy}});
                if(dx == x && dy == y) {
                    cout << "Yes";
                    return ;
                }
            }
        }
        while(!ghost.empty()) {
            int ghost_index = ghost.front().first;
            int ghost_x = ghost.front().second.first;
            int ghost_y = ghost.front().second.second;

            if(ghost_index == check_index) {
                for(int i=0; i<4; i++) {
                    int dx = ghost_x + mv[i][0];
                    int dy = ghost_y + mv[i][1];

                    if(ghost_visit[dx][dy]==0 && dx>=0 && dy>=0 && dx<N && dy<M) {
                        ghost_visit[dx][dy]=1;
                        ghost.push({ghost_index+1, {dx,dy}});
                    }
                }
                ghost.pop();
            } else {
                break;
            }
        }
    }
    cout << "No";
}
int main(int argc, char** argv)
{
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'G') {
                ghost.push({0,{i,j}});
                ghost_visit[i][j]=1;
            }
            if(arr[i][j]=='D') {
                x=i;
                y=j;
            }
            if( arr[i][j] =='N') {
                user.push({0,{i,j}});
                visit[i][j]=1;
            }
        }
    }
    bfs();
    return 0;
}
*/