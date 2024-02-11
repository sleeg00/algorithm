// 주유소
// N개 도시

#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001];
long long value[100001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> value[i];
    }

    long long mi = 2147483647;
    long long i = 0;
    long long hap = 0;
    while (i < N) {
        if (mi > value[i]) {
            mi = value[i];
        }
        hap += mi * a[i];
        i++;
    }
    cout << hap << endl;
}