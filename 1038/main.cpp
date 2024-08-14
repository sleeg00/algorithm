
/*#include <algorithm>
#include <iostream>
#include <queue>
#include <set>

using namespace std;

int N;
int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
queue<int> q;
set<int> s = {9, 90, 910, 9210, 93210, 943210, 9543210, 96543210, 976543210};
long long visit[10];
long long cnt = 0;
vector<long long> v;

void sol(string str, int number, int checker) {
    if (str.length() == checker && str.length() < 11) {
        v.push_back(stol(str));
        if (s.find(stol(str)) != s.end()) {
            for (int j = 0; j < 10; j++) {
                visit[j] = 0;
            }
            sol("", str.length(), str.length() + 1);
        }
    } else {
        if (number >= 0) {
            for (int i = 0; i <= 9; i++) {
                if (visit[i] == 0) {
                    if (str[str.length() - 1] - 48 > i || str == "") {
                        visit[i] = 1;
                        sol(str + to_string(arr[i]), number - 1, checker);
                        visit[i] = 0;
                    }
                }
            }
        }

    }
}

bool cmp(long long x, long long y) {
    if(to_string(x)[0] == to_string(y)[0] && to_string(x).length() == to_string(y).length() && x>9) {
        return x<y;
    } else {
        return x<y;
    }
}

int main(void) {
    cin >> N;
    sol("", 0, 1);
    sort(v.begin(), v.end(), cmp);
    if (v.size() < N || N==1023) {
        cout << -1;
    } else {
        if(N<=10) {
            cout << v[N];
        } else {
            cout << v[N];
        }
    }

}
 */