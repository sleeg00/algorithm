/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, K, temp, sum[100001], ret = -2147483647;
int main(void) {
    cin >> N >> K;

    for (int i = 1; i <= N; i++)
    {
        cin >> temp;
        sum[i] = sum[i - 1] + temp; // 구간합 배열
    }

    for (int i = K; i <= N; i++)
    {
        ret = max(ret, (sum[i] - sum[i - K]));
    }
}
*/