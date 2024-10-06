#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 수열 A, 가징 긴 증가하는 부분 수열

int N;
int arr[1001];
int dp[1001];
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<=i; j++) {
            if (dp[j] == 0) {
                dp[j] = 1;
            }
            if(i!=j) {
                if (arr[i] > arr[j]) {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }
    }
    int ma=-1;
    for(int i=0; i<N; i++) {

        ma = max(dp[i] ,ma);
    }
    cout << ma;
}