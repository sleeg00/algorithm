#include <iostream>
#include <algorithm>

using namespace std;

int N, M, ans;
int arr[100001];


int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> M;
    int left = 0;
    int right = N - 1;
    sort(arr, arr + N);
    while (left < right) { // i<j가 크기 때문에 <= ! 아니라 <다.
        if (arr[left] + arr[right] == M) {
            ans++;
            right--;
        } else if (arr[left] + arr[right] > M) {
            right--;
        } else if (arr[left] + arr[right] < M) {
            left++;
        }
    }
    cout << ans;
}