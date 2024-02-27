/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    long long N;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N; //13


    vector<int> v(N+1,0);

    for(int i=1; i<=N; i++) {
        v[i]=i;
        for(int j=1; j*j<=i; j++) {
            v[i] = min(v[i], v[i-j*j]+1);
        }
    }
    cout << v[N] <<endl;
    return 0;
}*/