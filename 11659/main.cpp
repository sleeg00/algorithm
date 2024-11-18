/*
#include <algorithm>
#include <iostream>

using namespace std;

// 수 N개, i~j번째 수 합
// // 5 3 -> 5개 수 합을 구해야 하는 횟수 : M (3)
// 구간 합

// 5 4 3 2 1
// 0 1 2 3 4 5
// 5 9 12 14 15

int N, M;
int arr[100002];
int hap[100002];

int first, second;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        hap[i] = hap[i - 1] + arr[i];
    }
    for (int i = 1; i <= M; i++) {
        cin >> first >> second;
        cout << hap[second] - hap[first - 1] << '\n';
    }
}
 */