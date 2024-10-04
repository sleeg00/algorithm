#include <algorithm>
#include <iostream>

using namespace std;
// 1초, 128MB
// x kg, y cm
// (x,y) , (p,q)
// x > p , y > q
int N;
int x,y;
vector<pair<int,int>> v;
int main(void) {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> x >> y;
        v.push_back({x,y});
    }
    int cnt[201];
    for(int i=0; i<v.size(); i++) {
        int check=1;
        for(int j=0; j<v.size(); j++) {
            if (i!=j) {
                if (v[i].first < v[j].first && v[i].second < v[j].second) {
                    check++;
                } else {
                    continue;
                }
            }
        }
        cnt[i]=check;
    }
    for(int i=0; i<v.size(); i++) {
        if (cnt[i]==0) cnt[i]=v.size();
        cout << cnt[i] << " ";
    }
}