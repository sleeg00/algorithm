/*
#include <algorithm>
#include <iostream>

using namespace std;

// 한 계단 OR 두 계단
// 연속 3개 계단 X, 시작점 제외
// 마지막은 반드시, 총 점수의 최댓값 구하기
// 2,3 번째중 큰 것?
// 이분탐색?
int arr[301];
int N;
int Dp[500];

int main(void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    Dp[0] = arr[0]; // 10
    Dp[1] = arr[0]+arr[1]; // 20
    Dp[2] = max(arr[0]+arr[2], arr[1]+arr[2]);
    for (int i = 3; i <=N-1; i++) {
        Dp[i] = max(Dp[i - 2] + arr[i], Dp[i - 3] + arr[i - 1] + arr[i]);
    }
    cout << Dp[N-1];
}
 */