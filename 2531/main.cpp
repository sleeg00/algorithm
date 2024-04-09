/*
#include <iostream>
#include <algorithm>


using namespace std;

int N; // 접시 수
int D; // 가짓 수
int K; // 연속 수
int C; // 쿠폰
int arr[10000];
int check[10000];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> D >> K >> C;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = N; i < N + K - 1; i++) {
        arr[i] = arr[i - N];
    }

    int left = 0, right = N + K - 1;
    while (left < right) {
        int leftValue = arr[left];
        int rightValue = arr[right];
        check[leftValue]++;
        check[rightValue]++;
        if(leftValue!=1) {
            break;
        }
    }
}
*/