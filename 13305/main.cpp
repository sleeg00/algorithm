// 제일 왼쪽 도시에서 제일 오른쪽 도시로 이동
// 처을 출발시 기름이 없어 주요소에서 기름을 넣고 출발
// 도시의 개수 2 <= N <= 100,000
// 도로의 길이 N-1개
// 1L당 가격 N개 <= 1,000,000,000
// 13:40
/*
#include <algorithm>
#include <iostream>

using namespace std;
int N;
long long dis[100002];
long long value[100002];
long long hap=0;
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for(int i=1; i<=N-1; i++) {
        cin >> dis[i];
    }
    for(int i=1; i<=N; i++) {
        cin >> value[i];
    }
    long long mi =2147483647;
    for(int i=1; i<=N-1; i++) {
        mi = min(value[i], mi);
        hap+=mi*dis[i];
    }
    cout << hap;
}
 */
