/*
#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

// 수열에서 연속적인 며칠 동안의 합이 가장 큰지 찾아보자
// 1  2  3  4  5  6  7  8  9  10
// 3 -2 -4 -9 0 3 7 13 8 -3
// 3 1 -3 -12 -12 -9 -2 11 19 16
int N, M;
int arr[100002];
int hap[100002];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ma = -214748364;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        hap[i] = hap[i - 1] + arr[i];
    }

    for (int i = M; i <= N; i++) {
        ma = max(ma, hap[i] - hap[i - M]);
    }
    cout << ma;
}
 */