#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int arr[10001];

vector<int> v;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    int ma = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        ma = max(ma, arr[i]);
    }

    unsigned int left = 1, right, mid;
    unsigned int value = 0;
    right =ma;
    while (left <= right) {
        mid = (left + right) / 2;

        int now = 0;

        for (int i = 0; i < N; i++) {
            now += arr[i] / mid;
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