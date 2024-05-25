#include <algorithm>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string str;
string str2;

int main(void) {
    getline(cin, str);
    getline(cin, str2);
    int im_x = 0;
    int im_y = str2.size();
    int cnt = 0;
    while (true) {

        string s = str.substr(im_x, (im_y));
        if (s == str2) {
            cnt++;
            im_x += im_y;
        } else {
            im_x++;

        }
        if(im_x>str.size()-1) {
            break;
        }
    }
    cout << cnt;
}