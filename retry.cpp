/*
#include <algorithm>
#include <iostream>

using namespace std;
// 첫째 줄 수의 개수 N개
// 수 들 Ai
// +, -, *, / 개수
int N, arr[300];
int ma = -2147483646;
int mi = 2147483646;

void dfs(int x, int y, int k, int z, int index, int hap) {
    if (index == N) {
        ma = max(ma, hap);
        mi = min(mi, hap);
    } else {
        if (x != 0) {
            int h = hap + arr[index + 1];
            dfs(x - 1, y, k, z, index + 1, h);
        }
        if (y != 0) {
            int h = hap - arr[index + 1];
            dfs(x, y - 1, k, z, index + 1, h);
        }
        if (k != 0) {
            int h = hap  * arr[index + 1];
            dfs(x, y, k-1, z, index + 1, h);
        }
        if (z != 0) {
            int h = hap / arr[index + 1];
            dfs(x, y, k, z-1, index + 1, h);
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y, k, z;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    cin >> x >> y >> k >> z;
    dfs(x, y, k, z, 1, arr[1]);
    cout << ma << endl << mi;
}
 */