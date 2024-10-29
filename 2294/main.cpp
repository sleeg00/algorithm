#include <algorithm>
#include <iostream>

using namespace std;

int N, K;
int Dp[100001];
int weight[100001];

int main(void) {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> weight[i];
    }

    for(int i=1; i<=K; i++) {
        Dp[i] = 123456789;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = weight[i]; j <= K; j++) {
            Dp[j] = min(Dp[j], Dp[j-weight[i]]+1);
        }
    }
    if(Dp[K]==123456789) {
        cout<<-1;
    }else {
        cout << Dp[K];
    }
}