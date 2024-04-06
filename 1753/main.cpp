#include <algorithm>
#include <iostream>

using namespace std;

int T, N;
long long arr[1000001];
long long hap = 0;
long long ma=0;
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        int k;
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        ma=arr[N-1];
        hap=0;
        for(int j=N-2; j>=0; j--) {
            if (ma > arr[j]) {
                hap += ma-arr[j];
            } else {
                ma = arr[j];
            }
        }
        cout << hap << '\n';
    }
}