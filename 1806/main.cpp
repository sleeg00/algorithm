/*
#include <algorithm>
#include <iostream>

using namespace std;

int N, M;
// N : 10 ~ 100,000 10만
// M : 0 ~ 100,000,000 1억
// N 이하의 자연수 수열
// 연속된 수들의 부분한 중 합이 S 이상인 것 중, 가장 짧은 것의 길이
// 정렬 이분 탐색 X 큰 것부터 찾으면 되니.
// 마지막 포인터 가 >= M 1
// else
// 마지막 포인터 -i => A(i), A(i-1) .. A(0) 까지 진행

int arr[100001];
long long hap = 0;
int ma = 2147483647;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int i = 0;
    int j = 0;
    while (i <= j) {
        if (hap >= M) {
            ma = min(ma, j - i);
            hap -= arr[i++];
        } else if (j == N) {
            break;
        } else {
            hap += arr[j++];
        }
    }

    if(ma==2147483647) {
        cout << 0;
    } else {
        cout << ma;
    }
}
*/