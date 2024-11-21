/*
#include <algorithm>
#include <iostream>

using namespace std;

// A, B 영단어
// A - > B 로 바꾸기
// 문자열 뒤 A 추가
// 문자열 뒤에 B추가 후 뒤집기

string first_str;
string second_str;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> first_str >> second_str;
    while (true) {
        int i = first_str.size() - 1;
        int j = first_str.size() - 1;
        if (i == second_str.size() - 1) {
            break;
        }
        if (first_str[i] == second_str[j]) {
            while (j < second_str.size()) {
                j++;
                if (first_str[i] != second_str[j]) {
                    first_str += second_str[j];
                    if (second_str[j] == 'B') {
                        reverse(first_str.begin(), first_str.end());
                    }
                    break;
                }
            }
        } else {
            first_str += 'B';
            reverse(first_str.begin(), first_str.end());

        }
    }
    if(first_str==second_str)
        cout << 1;
    else
        cout << 0;

}
 */