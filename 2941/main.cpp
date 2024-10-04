/*
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

// 1초, 128MB
// 크로아티아 알파벳
// 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력
// 100글자의 단아
unordered_map<string, int> m;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    m.insert({"c=", 1});
    m.insert({"c-", 1});
    m.insert({"dz=", 1});
    m.insert({"d-", 1});
    m.insert({"lj", 1});
    m.insert({"nj", 1});
    m.insert({"s=", 1});
    m.insert({"z=", 1});

    string str;
    cin >> str;
    int i = 0;

    int cnt = 0;
    while (true) {
        if (i >= str.size()) {
            break;
        }
        string value = str.substr(i, 2);
        string value2 = str.substr(i, 3);

        if (m.find(value) != m.end()) {
            i += 2;
        } else if (m.find(value2) != m.end()) {
            i += 3;
        } else {
            i++;
        }
        cnt++;
    }
    cout << cnt;
}
 */