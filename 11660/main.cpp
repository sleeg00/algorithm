/*
#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1026][1026];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    int x1, y1, x2, y2;
    for (int i = 1; i <= M; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] - (arr[x2][y1 - 1] + arr[x1 - 1][y2] - arr[x1 - 1][y1 - 1]) << "\n";
    }
}
 */