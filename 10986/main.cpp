#include <iostream>
#include <algorithm>

using namespace std;
long long arr[500001];
long long searchValue[500001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> searchValue[i];
        int mid = (N+1) / 2;
        int start = 0;
        int end = N;
        int hap = 0;
        int lb =lower_bound(arr, arr+N, searchValue[i])-arr+1;
        int up = upper_bound(arr,arr+N, searchValue[i])-arr+1;
        hap = up-lb;
//        while (start <= end) {
//            mid = start+(end-start)/2;
//            if (arr[mid] == searchValue[i]) {
//                hap++;
//                int im = hap;
//                int j = 1;
//                while (true) {
//                    if (mid + j < N) {
//                        if (arr[mid + j] == searchValue[i]) {
//                            hap++;
//                        }
//                    }
//                    if (mid - j >= 0) {
//                        if (arr[mid - j] == searchValue[i]) {
//                            hap++;
//                        }
//                    }
//                    if (im == hap) {
//                        break;
//                    }
//                    j++;
//                    im=hap;
//                }
//                break;
//            }
//            if (arr[mid] > searchValue[i]) {
//                end = mid - 1;
//            } else  {
//                start = mid + 1;
//            }
//
//        }

        cout << hap << " ";
    }

}