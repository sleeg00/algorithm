/*
#include <iostream>
#include <algorithm>

using namespace std;

long long arr[200001];
int N, M;

int getShareCount(long long mid) {
    long long prev = arr[1];
    int shareCount = 1;
    for (int i = 2; i <= N; i++) {
        if (arr[i] - prev >= mid) {
            shareCount++;
            prev = arr[i];
        }
    }
    return shareCount;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);


    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + N + 1);
    long long left = 1;
    long long right = arr[N];
    long long mid;
    long long ans;
    while (left <= right) {
        mid = (left + right) / 2;
        if (getShareCount(mid) >= M) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    cout << ans;
}
 */