#include <algorithm>
#include <iostream>
// 15:35
using namespace std;
// 설탕 공장
// N Kg 배달, 봉지 = 3Kg, 5Kg 존재
// 최대한 적은 봉지 ex) 18Kg 설탕, 5Kg 3개, 3Kg 1개
int N;
int cnt = 0;

int main(void) {
    cin >> N;

    while (N>=0) {
        if (N % 5 == 0) {
            cnt += N/5;
            N=0;
        } else {
            N -= 3;
            cnt++;
        }

        if (N == 0) {
            cout << cnt;
            return 0;
        }
    }
    cout << -1;
}