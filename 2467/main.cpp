/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
long long arr[100001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int left = 0;
    int right = N - 1;
    long long mi = 2147483647;
    int checkX, checkY;
    while (left < right) {
        long long value = arr[left] + arr[right];
        if (mi > abs(value)) {
            mi = abs(value);
            checkX = arr[left];
            checkY = arr[right];
        }
        if (value == 0) {
            break;
        }
        if (value > 0) {
            right--;
        } else if (value < 0) {
            left++;
        }
    }
    cout << checkX << " " << checkY;
}
 */