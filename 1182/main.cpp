/*
#include <algorithm>
#include <iostream>

using namespace std;
// 부분수열의 합
// N개의 정수로 이루어진 "수열"
// 크기가 양수인 "부분수열" 중 수열의 원소를 다 "더한 값" 'S'가 되는 "경우의 수"
// 1 <= N <= 20
// 1 <= |S| <= 1,000,000 (백만)
long long N, S;
int arr[1000001];
int ans=0;
void dfs(int x, long long hap) {
    if(hap==S && x>=0) {
        ans++;
    }
    for(int i=x+1; i<N; i++) {
        dfs(i, hap+arr[i]);
    }

}
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);


    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    dfs(-1,0);
    cout << ans;
}
 */