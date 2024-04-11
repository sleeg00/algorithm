/*
#include <algorithm>
#include <iostream>

using namespace std;

int N;
string str, destStr;
string stStr;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    cin >> str >> destStr;
    stStr = str;
    int check = 0;
    int check2 = 0;
    int cnt=0;
    for(int i=0; i<str.length(); i++) {
        if (str[i]==destStr[i]) {
            cnt++;
        }
    }
    if (cnt==str.length()) {
        cout << 0;
        return 0;
    }
    stStr[0] = ('1' - stStr[0]) + '0';
    stStr[1] = ('1' - stStr[1]) + '0';
    check2++;

    for (int i = 1; i < str.size(); i++) {
        if (stStr[i - 1] == destStr[i - 1]) {
            continue;
        } else {
            stStr[i] = '1' - stStr[i] + '0';
            stStr[i - 1] = '1' - stStr[i - 1] + '0';
            if(i+1<N) {
                stStr[i + 1] = '1' - stStr[i + 1] + '0';
            }
            check2++;
        }
    }
    int sw = 0;
    int sw2 = 0;
    for (int i = 0; i < stStr.size(); i++) {
        if (stStr[i] != destStr[i]) {
            sw = 1;
        }
    }
    for (int i = 1; i < str.size(); i++) {
        if (str[i - 1] == destStr[i - 1]) {
            continue;
        } else {
            str[i] = '1' - str[i] + '0';
            str[i - 1] = '1' - str[i - 1] + '0';
            if(i+1<N) {
                str[i + 1] = '1' - str[i + 1] + '0';
            }
            check++;
        }
    }
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != destStr[i]) {
            sw2 = 1;
        }
    }

    if (sw == 1 && sw2 == 1) {
        cout << -1;
    } else if (sw == 1 && sw2==0) {
        cout << check;
    } else if (sw==0 && sw2==1){
        cout << check2;
    } else {
        cout << min(check,check2);
    }
}
 */