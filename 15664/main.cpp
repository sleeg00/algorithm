#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int N, M;
int number[10];
bool visit[10];
int arr[10];
set<vector<int>> s;

void sol(int count) {
    if (count == M) {
        vector<int> v;
        for (int i = 0; i < count; i++) {
            v.push_back(arr[i]);
        }
        s.insert(v);
        v.clear();
    } else {
        for (int i = 0; i < N; i++) {
            if (!visit[i] && count == 0 || !visit[i] && count > 0 && arr[count-1] <= number[i]) {
                visit[i] = true;
                arr[count] = number[i];
                sol(count + 1);
                visit[i] = false;
            }
        }
    }
}

int main(void) {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }
    sol(0);
    for(auto itr = s.begin(); itr!=s.end(); itr++) {
        for(auto v = (*itr).begin(); v!=(*itr).end(); v++) {
            cout << *v << " ";
        }
        cout << endl;
    }
}