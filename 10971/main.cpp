#include <algorithm>
#include <iostream>

using namespace std;
int N;
int arr[11][11];
bool visit[11];
long long mi=2147483646;
void dfs(int cnt, int x, long long hap, int first) {
    if (cnt == N && x == first) {
        mi = min(mi, hap);
    } else {
        for (int i = 1; i <= N; i++) {
            if (!visit[i] && arr[x][i]!=0) {
                visit[i] = true;
                dfs(cnt + 1, i, hap + arr[x][i], first);
                visit[i] = false;
            }
        }
    }
}

int main(void) {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        dfs(0, i, 0, i);
    }
    cout << mi;
}