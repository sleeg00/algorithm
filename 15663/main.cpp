#include <algorithm>
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

int N, length;
int number[10];
bool visit[10];
int arr[10];
set<vector<int>> s;

void sol(int count) {

    if (count == length) {
        vector<int> v;
        for (int i = 0; i < length; i++) {
            v.push_back(arr[i]);
        }
        s.insert(v);
        v.clear();
    } else {
        for (int i = 0; i < N; i++) {
            if (!visit[i]) {
                visit[i] = true;
                arr[count] = number[i];
                sol(count + 1);
                visit[i] = false;
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> length;

    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }

    sol(0); for(auto itr = s.begin(); itr!=s.end(); itr++) {
        for(auto i = (*itr).begin(); i!=(*itr).end(); i++) {
            cout << *i << " ";
        }
        cout << endl;
    }

}