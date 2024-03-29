/*
#include <iostream>
#include <algorithm>

using namespace std;

int checkArr[30][200001];
int visit[30];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    char ch;
    int N, x, y;
    int im = 0;
    cin >> s;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ch;
        im = 0;
        if (visit[ch - 'a'] == 0) {
            for (int j = 0; j < s.size(); j++) {
                if (s[j] == ch) {
                    im++;
                    checkArr[ch - 'a'][j] = im;
                } else {
                    if (j == 0) {
                        checkArr[ch - 'a'][j] = 0;
                    } else {
                        checkArr[ch - 'a'][j] = checkArr[ch - 'a'][j - 1];
                    }
                }
            }
            visit[ch - 'a'] = 1;
        }

        cin >> x >> y;
        if (s[x] == ch) {
            cout << checkArr[ch - 'a'][y] - checkArr[ch - 'a'][x] + 1 << "\n";
        } else {
            cout << checkArr[ch - 'a'][y] - checkArr[ch - 'a'][x] << "\n";
        }
    }
}
 */