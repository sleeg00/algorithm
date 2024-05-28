/*
#include <algorithm>
#include <iostream>

using namespace std;

string str, str2;
int check = 0;


int main(void) {
    cin >> str;
    cin >> str2;

    while (true) {
        if (str2.length() == str.length()) {
            if(str2 == str) {
                cout << 1;
            } else {
                cout << 0;
            }
            return 0;
        }
        if (str2[str2.length()-1] == 'A') {
            str2 = str2.substr(0, str2.length() - 1);
        } else {
            reverse(str2.begin(), str2.end());
            str2=str2.substr(1, str2.length()-1);
        }
    }
}
 */