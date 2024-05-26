#include <algorithm>
#include <iostream>

using namespace std;

int N;
int M;
string str="", str2;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    cin >> str2;
    for (int i = 0; i < N * 2 + 1; i++) {
        if (i % 2 == 0) {
            str +='I';
        } else {
            str += 'O';
        }
    }
    int cnt = 0;
    int i = 0;

    while (true) {
        string s = str2.substr(i, str.size());
        if (s == str) {
            cnt++;
        }
        i++;
        if (i>str2.size()-1) {
            break;
        }
    }
    cout << cnt;

}