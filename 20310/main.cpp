/*

// 0 1 로 이루어진 문자열 S
// S의 0, 1 개수는 모두 짝수
// S의 문자 중 0,1의 절반을 제거 해 S` 생성
// S`로 가능한 문자열중 사전순으로 가장 빠른 것
// 2 <= S <= 500
// S.legnth() % 4 == 0
// S의 홀수 문자 1, 짝수 문자 0
// -> 정렬 후 뒤의 문자부터 1이나리면 제거 0 이나리면 제거 (0과 1의 개수 세기)
// 01일 경우 제거 안함
// TestCase ---------
// 01001101
// 0011
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<char> v;
    string str;
    int count_zero = 0, count_one = 0;
    int remove_zro = 0, remove_one = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            count_one++; // 0의 개수
        } else {
            count_zero++; // 1의 개수
        }
    }

    for (int i = 0; i < str.length();) {
        if (str[i] == '1' && count_one / 2 > remove_one) {
            remove_one++;
            str[i]=' ';
        }
        i++;
    }

    for (int i = str.length() - 1; i >= 0;) {

        if (str[i] == '0' && count_zero / 2 > remove_zro) {
            remove_zro++;
            str[i]=' ';
        }
        i--;
    }

    for (int i=0; i<str.length(); i++) {
        if (str[i]!=' ') {
            cout << str[i];
        }
    }
}
*/