
/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;
string str;
vector<string> v;

int main(void) {
    cin >> N;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    for (int i = 0; i < N; i++) {
        int check = 0;
        cin >> M;
        for (int j = 0; j < M; j++) {
            cin >> str;
            v.push_back(str);
        }
        sort(v.begin(), v.end());
        for (int j = 0; j < M - 1; j++) {
            if (v[j] == v[j + 1].substr(0, v[j].length())) {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
        v.clear();
    }
}
 */