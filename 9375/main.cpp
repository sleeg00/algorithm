//
/*
#include <algorithm>
#include <iostream>

using namespace std;

int N, M;

long long ma = -1;
long long im;
long long a[100001];
long long dp[1007][1007];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> a[i];
        dp[i][i] = a[i];
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i > j) { // 위에꺼 따라가기
                dp[i][j] = dp[i - 1][j];
            } else  {
                dp[i][j] = max(dp[i][j - i] + a[i], dp[i-1][j]);

            }
            im = dp[i][j];
            if (im > ma) {
                ma = im;
            }
        }
    }
    for (int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cout << dp[i][j] <<" ";
        }
        cout << "\n";
    }
    cout << ma;
}
 */