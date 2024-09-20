/*
#include <algorithm>
#include <iostream>

using namespace std;

// KOI N 명 학생 참가
// N명의 예상 등수
// 임의의 등수 매기기
// A등 예상, 실제 B등 => 불만도 (|A - B|)
// 불만도의 총 합을 최소로
// 1 <= N <= 500,000 (50만)

int N;
long long arr[500001];

int main(void) {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+N);
    long long hap=0;
    for(int i=0; i<N; i++) {
        hap+=abs(i+1-arr[i]);
    }
    cout << hap;
}
 */