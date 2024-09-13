/*
#include <algorithm>
#include <iostream>

// 일직선 상 마을
// 특정 위치 안테나 한 개 설치
// 안테나 <-> 집 거리 총합이 최소
// 집이 위치한 곳만 설치 가능

using namespace std;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    long long hap =0;
    int arr[200001];
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    int ans;
    if(N%2==0) {
        ans = arr[N/2-1];
    } else {
        ans = arr[N/2];
    }

    cout << ans;
}
 */