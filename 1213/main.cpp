/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int hap = 0;
    int count[50] = {0};
    char a[50];
    string str; 
    int cnt=0;
    vector<char> second;
    vector<char> first;
    vector<char> middle;
    vector<string> dap;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        count[str[i] - 65]++;
        if (str[i]<'A' && str[i]>'Z') {
            cout <<"I'm Sorry Hansoo";
            return 0;
        }
    }

    int i = 0;
    while (true) {
        for (int j = 0; j < count[i] / 2; j++) {
           first.push_back(i+'A');
        }
        i++;
        if (i == 49) {
            break;
        }
    }


    for (int i = 0; i <50; i++) {
        if (count[i] ==1 || count[i]%2==1) {
           first.push_back(i+'A');
           cnt++;
        }
    }
    i = 49;
    while (true) {
        char a;
        if (count[i]>0) {
            for (int j = 0; j < count[i] / 2; j++) {
                first.push_back(i+'A');
            }
        }
        i--;
        if (i == -1) {
            break;
        }
    }
    
    if (cnt/2>0 || str.length()>50 || first.size() != str.length()) {
        cout <<"I'm Sorry Hansoo";
    } else {
        for (auto itr = first.begin(); itr!=first.end(); itr++) {
         cout << *itr;
        }
    }
    return 0;
}
 */