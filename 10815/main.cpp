/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 숫자 카드 정수
// N개의 카드, 정수 M개를 가짐
// 이 수가 적혀있는 숫자 카드를 상근이 가지고 있는가?
// 1 <= N <= 500,000 (50만)
// 1 <= M <= 500,000 (50만)

int N, M;
int first_arr[500001], second_arr[500001];
vector<int> v;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> first_arr[i];
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> second_arr[i];
    }
    sort(first_arr, first_arr + N);


    int mid;
    for(int i=0; i<M; i++) {
        int left=0,right=N;
        while (true) {
            mid = (right+left)/2;

            if (first_arr[mid] == second_arr[i]) {
                cout << 1 << " ";
                break;
            } else if (first_arr[mid] < second_arr[i] || left==N-1) {
                left = mid+1;
            } else {
                right = mid;
            }
            if(left>=right) {
                cout << 0 <<" ";
                break;
            }

        }
    }
}
 */