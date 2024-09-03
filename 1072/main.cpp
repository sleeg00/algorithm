#include <algorithm>
#include <iostream>

using namespace std;
// 카드놀이
// 이길 때도, 질 때도
// 시선이 느껴지면 게임 중단 후 시선이 안 느껴지면 다시 시작
// 그때 실력이 늚
// 게임 횟수 : X
// 이긴 게임 : Y(Z%)
// Z는 승률, 소수점 버림
// 이전 기록은 지우지 못하며, 게임에서 더이상 지지 않는다.

// 1 <= X <= 1,000,000,000 (10억)
// 0 <= Y <= X(1,000,000,000) (10억)
// Z가 변하지 않는다면 -1
// X : 게임 횟수가 주어짐, Y : 이긴 게임이 주어짐
// 10 8 -> 80프로,
// 백트래킹?
long long X, Y;
long long ans;
double e;

int main(void) {
    cin >> X >> Y;
    ans= int(Y*100 / X);
    int left=1;
    int right =1000000000;
    int mid;
    while (left <= right) {
        mid = (left + right)/2;
        if(int((Y+mid)*100/(X+mid))>ans) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }
    if(left==1000000001) {
        cout << -1;
        return 0;
    }
    cout << left;
}