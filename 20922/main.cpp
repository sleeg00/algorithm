// 수열에서 같은 원소 여러개 X
// 같은 원소가 K개 이하로 들어 있는 최장 연속 부분 수열 길이 구하기
// 수열은 변경 안됨

// left, right
// visit[left]++
// visit[left] > M
// visit[start]--
/*
#include <algorithm>
#include <iostream>

using namespace std;

int arr[200001];
int visit[200001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M, left = 0, right = 0;
    int ma = -1;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    while (left <= right && right < N) {
        if (visit[arr[right]] > M - 1) {
            visit[arr[left]]--;
            left++;
        } else {
            visit[arr[right]]++;
            ma = max(ma, right - left);
            right++;
        }
    }
    cout << ma + 1;
}
 */