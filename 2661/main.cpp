/*
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;
set<string> s;
int N;
vector<string> v;

void sol(string now_s) {

    if (now_s.length() == N) {
        v.push_back(now_s);
        return;
    } else if (v.size() == 0) {
        for (int i = 1; i <= 3; i++) {
            if (now_s == "") {
                sol(now_s + to_string(i));
            } else {
                int check = false;
                if (now_s[now_s.length() - 1] - 48 != i) {
                    string str = now_s + to_string(i);
                    for (int j = 2; j <= str.length() / 2; j++) {
                        string temp = str.substr(str.length() - j - j, j);
                        string temp2 = str.substr(str.length() - j, j);
                        if (temp == temp2) {
                            check = true;
                        }
                    }
                    if (check == false) {
                        sol(str);
                    }
                }
            }
        }
    }
}

int main(void) {
    cin >> N;
    sol("");
    sort(v.begin(), v.end());
    cout << v[0];
}
 */