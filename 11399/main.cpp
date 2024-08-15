/*
#include <iostream>
#include <algorithm>

using namespace std;

int N;
int arr[1001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    int hap = 0;
    int im = 0;
    for (int i = 0; i < N; i++) {
        im = im + arr[i];
        hap += im;
    }
    cout << hap;
}
 */