/*
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

string str;
int check = 0;
int cnt = 0;
string ans = "";

int main(void) {
    getline(cin, str);

    if (str[0] == '_' || str[str.size() - 1] == '_' || str[0] >= 'A' && str[0] <= 'Z') {
        cout << "Error!";
        return 0;
    }
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '_') {
            if(i+1<=str.size()-1)  {
                if(str[i+1]=='_' || str[i+1]>='A' && str[i+1]<='Z') {
                    cout << "Error!";
                    return 0;
                }
            }
            if(i-1>=0) {
                if(str[i-1]=='_' || str[i-1]>='A' && str[i-1]<='Z') {
                    cout << "Error!";
                    return 0;
                }
            }
            if (cnt == 1) {
                cout << "Error!";
                return 0;
            }
            auto number = str[i + 1];
            char out = number - 32;
            ans += out;
            i++;
            check = 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (check == 1) {
                cout << "Error!";
                return 0;
            }
            cnt=1;
            auto number = str[i];
            char out = number + 32;
            ans += '_';
            ans += out;
        } else {
            ans += str[i];
        }
    }

        cout << ans;
}
 */