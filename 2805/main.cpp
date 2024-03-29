#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1000001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    long long N, M;

    cin >> N >> M;

    long long ma = 0;
    long long mi = 2147483647;
    for (long long i = 0; i < N; i++) {
        cin >> arr[i];
        ma = max(ma, arr[i]);
        mi = min(mi, arr[i]);
    }
    long long left = 1;
    long long right, mid;
    right = ma;
    long long value = 0;

    while (left <= right) {

        mid = (left + right) / 2;
        long long now = 0;
        for (long long i = 0; i < N; i++) {
            if (arr[i] > mid) {
                now += (arr[i]-mid);
            }
        }
        if (now >= M) {
            left = mid + 1;
            value = max(value, mid);
        } else {
            right = mid - 1;
        }
    }
    cout << value;
}