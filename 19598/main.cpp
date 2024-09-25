/*
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int N;
pair<int,int> arr[100001];
priority_queue<pair<int,int>> pq;
int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    int x, y;
    for(int i=0; i<N; i++) {
        cin >> x >> y;
        arr[i] = {x,y};
    }
    sort(arr,arr+N);
    for(int i=0; i<N; i++) {
        if(i==0) {
            pq.push({-arr[i].second, arr[i].first});
        } else {
            if(arr[i].first >= -pq.top().first) {
                pq.pop();
            }
            pq.push({-arr[i].second, arr[i].first});
        }
    }
    cout << pq.size();
}
 */