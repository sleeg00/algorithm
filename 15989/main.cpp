#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
int dp[10001][4]={0};

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;
    cin >>N;
    for (int i = 4; i <= 10000; i++) {
        dp[i][1] = 1;
        dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
        dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
    }
    for (int i = 0; i < N; i++) {
        cin >> M;
        cout << dp[M][3]+dp[M][2]+dp[M][1] << '\n';
    }
}