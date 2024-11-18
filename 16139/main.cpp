#include <algorithm>
#include <iostream>

using namespace std;

// 특정 알파벳이 몇번 나오는지?
// 특정 문자열 : S, 특정 알파벳 a, 문자열 구간 l~r [l,r] 주어진다.
// S의 l~r 까지 에서 문자 a가 얼마나 나오는가?
// S는 0 부터 시작
// 질문 q번

// 1<= S <= 200,000, 소문자
// 1 <= Q <= 200,000
// 0 1 2 3 4 5 6 7 8 9 10 11 12
// s e u n g j a e h w  a  n  g
// 0 0 0 0 0 0 1 1 1 1  2  2  2 -> a
// 26*200,000 =5,200,000
int hap[26][200001];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    int q;
    char ch;
    int l, r;
    cin >> s >> q;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] - 'a' == i) {
                hap[i][j+1] = hap[i][j] + 1;
            } else {
                hap[i][j+1] = hap[i][j];
            }
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> ch >> l >> r;
        cout << hap[ch - 'a'][r+1] - hap[ch - 'a'][l] << '\n';
    }
}