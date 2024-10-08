#include <algorithm>
#include <iostream>

using namespace std;
// 45656
// 인접한 모든 자리 차이 1 => 계단 수
// 길이가 N인 계단 수가 총 몇 개 인지 구하기, 0으로 시작은 제외
long long dp[101][101];

int main(void) {
    int N;
    cin >> N;
    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][1]%1000000000;
            } else if (j == 9) {
                dp[i][j] = dp[i - 1][8]%1000000000;
            } else {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1])%1000000000;
            }
        }
    }
    long long hap = 0;
    for(int i=0; i<10; i++) {
        hap+=dp[N][i];
    }

    cout << hap%1000000000;
}