/*
#include <algorithm>
#include <iostream>
#include <limits.h>
using namespace std;

int N;
int arr[10001];
int x1, x2, x3, x4;

int cnt = 0;
int ma = INT_MAX;
int mi = INT_MIN;

void dfs(int a1, int a2, int a3, int a4, int hap) {
    if(a1==0 && a2==0 && a3==0 &&a4==0) {
        mi = max(hap, mi);
        ma = min(hap, ma);
    }

    if (a1 > 0) {
        cnt++;
        dfs(a1 - 1, a2, a3, a4, hap +arr[cnt]);
        cnt--;
    }
    if (a2 > 0) {
        cnt++;
        dfs(a1, a2 - 1, a3, a4, hap - arr[cnt]);
        cnt--;
    }
    if (a3 > 0) {
        cnt++;
        dfs(a1, a2, a3 - 1, a4, hap*arr[cnt]);
        cnt--;
    }
    if (a4 > 0){
        cnt++;
        if (hap < 0) {
            hap = -hap / arr[cnt];
            hap = -hap;
        } else {
            hap /= arr[cnt];
        }

        dfs(a1, a2, a3, a4 - 1,hap);
        cnt--;

    }
}

int main(void) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> x1 >> x2 >> x3 >> x4;

    dfs(x1, x2, x3, x4, arr[0]);
    cout << mi << endl << ma;
}
 */