/*
#include <algorithm>
#include <iostream>
#include <Vector>
using namespace std;

long long v[100001];

long long w[100001];
int N, K, W,V;
int arr[101][100001];
int main(void) {
    cin >> N >> K;

    for(int i=1; i<=N; i++) {
        cin >> W >> V;
        v[i]=V;
        w[i]=W;
    }
    for(int i=1; i<=K; i++) {
        for(int j=1; j<=N; j++) {
            if(i >= w[j]) {
                if(arr[j-1][i] > arr[j-1][i-w[j]] + v[j]) {
                    arr[j][i] = arr[j-1][i];
                } else {
                    arr[j][i] = arr[j-1][i-w[j]]+v[j];
                }
            } else {
                arr[j][i] = arr[j-1][i];
            }
        }
    }
    int ma=-1;
   for(int i=1; i<=N; i++) {
       ma = max(ma,arr[i][K]);
   }
   cout << ma;
}
 */