/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

long long N;
long long arr[1000001];

vector<int> v;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (v.empty() || v.back() < arr[i]) {
            v.push_back(arr[i]);
        } else {
            *lower_bound(v.begin(), v.end(), arr[i]) = arr[i];
        }
    }
    cout << v.size();
}*/