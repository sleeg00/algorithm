/*
// 축구
// 평일 오후 의무 참석 아님
// N명 => 짝수
// N/2명 스타트 팀, 링크
//1,2 =
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N;
int arr[101][101];
int hap = 0;
int visit[101];
int ma = 214748365;
int v1[21];
int v2[21];


void dfs2(int x, int cnt) {
    if (cnt + 1== N / 2) {
        v2[cnt]=x;
        int sum =0;
        int sum2=0;
        for(int i=0; i<N/2; i++) {
            for(int j=i+1; j<N/2; j++) {
                sum+=arr[v1[i]][v1[j]]+arr[v1[j]][v1[i]];
                sum2+=arr[v2[i]][v2[j]]+arr[v2[j]][v2[i]];
            }
        }
        if(ma>abs(sum-sum2)) {
            ma = abs(sum - sum2);
        }
    } else if (cnt < N / 2) {
        for (int i = x; i < N; i++) {
            if (visit[i] == 0 && x!=i) {
                visit[x] = 1;
                v2[cnt]=x;
                dfs2(i, cnt+1);
                visit[x] = 0;
            }
        }
    }
}

void dfs(int x, int cnt) {
    if (cnt + 1== N / 2) {
        visit[x]=1;
        v1[cnt]=x;
        for (int i = 0; i < N; i++) {
            if (visit[i] == 0) {
                dfs2(i, 0);
            }
        }
        visit[x]=0;
    } else if (cnt < N / 2) {
        for (int i = x + 1; i < N; i++) {
            if (visit[i] == 0) {
                visit[x] = 1;
                v1[cnt] = x;
                dfs(i, cnt+1);
                visit[x] = 0;
            }
        }
    }
}

int main(void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
            hap += arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {

        dfs(i,0);
    }
    cout << ma;
}
 */