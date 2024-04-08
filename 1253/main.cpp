/*
#include <iostream>
#include <algorithm>

using namespace std;

int N;
long long arr[2001];
long long k;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int left = 0;
    int right = N - 1;
    int cnt = 0;

    if (N == 1) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < N; i++) {
        long long value = arr[i];
        int left = 0, right = N - 1, hap;
        while (left < right) {
            hap = arr[left] + arr[right];
            if (hap == value) {
                if (left != i && right != i) {
                    cnt++;
                    break;
                } else if (left == i) {
                    left++;
                } else if (right == i) {
                    right--;
                }
            } else if (hap < value) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << cnt;
}
 */