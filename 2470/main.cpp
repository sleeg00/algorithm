/*
#include <algorithm>
#include <iostream>

using namespace std;

int N;
long long arr[100000];

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
    int value;
    int mi = 2146473645;
    int checkValueFirst;
    int checkValueSecond;
    while (left < right) {
        value = arr[left] + arr[right];
        if (mi > abs(value)) {
            checkValueFirst = arr[left];
            checkValueSecond = arr[right];
            mi = abs(value);
        }
        if (value < 0) {
            left++;
        } else if (value > 0) {
            right--;
        } else if(value==0) {
            break;
        }

    }

    cout << checkValueFirst << " " << checkValueSecond;
}*/