/*
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int N;
string str;
unordered_map<char, int> m;
int ans = 0;

int main(void) {
    cin >> N;
    string first_str;
    cin >> first_str;
    for (int i = 0; i < first_str.size(); i++) {
        auto itr = m.find(first_str[i]);
        if (itr == m.end()) {
            m.insert({first_str[i], 1});
        } else {
            m[first_str[i]]++;
        }
    }

    for (int i = 1; i < N; i++) {
        cin >> str;
        int cnt = 0;
        for (int j = 0; j < str.size(); j++) {
            auto search = m.find(str[j]);
            if (search != m.end()) {
                cnt++;
            }
        }
        if (str.size()-cnt <= 1) {
            cout << str << endl;
            ans++;
        }
    }
    cout << ans;
}
 */