#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
set<int> s;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    int arr[100001];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);


    long long result = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {

            long long cnt = arr[i] + arr[j];

            auto ld = lower_bound(arr+j+1, arr + N, -cnt) - arr;
            auto up = upper_bound(arr+j+1, arr + N, -cnt) - arr;

                result += up - ld;

        }
    }
    cout << result;
}