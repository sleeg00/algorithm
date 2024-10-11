#include <algorithm>
#include <iostream>

using namespace std;
// 2초, 128MB
// 포도주 잔, 두 가지 규칙
// 포도주 잔 선택시 그 잔 모두 마셔야함, 마신 후에는 제자리에 놓기
// 연속으로 놓여 있는 3잔은 마실 수 없다.
// 많은 양의 포도주 맛보기
int N;
int arr[10001];
int dp[10001];
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    dp[0] = arr[0];
    dp[1] = arr[0]+arr[1];
    dp[2] = max(arr[2] + arr[1], arr[2] + arr[0]);
    dp[2] = max(dp[2],dp[1]);
    if(N == 3){
        cout << dp[2];
        return 0;
    }
    int ma=-1;
    for(int i=3; i<=N+2; i++) {
        dp[i] = max(max(dp[i-3]+arr[i], dp[i-2]+arr[i]), dp[i-3]+arr[i-1]+arr[i]);

        ma=max(dp[i],ma);
    }
    cout << ma;
}