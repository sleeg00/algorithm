#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

// TV 리모컨
// 버튼 0~9, +, - 존재, 채널 무한대
// 이동하려는 채널 N
// 최소 횟수는?
// 고장난 버튼 존재
// 이분탐색 버튼 찾고 -, + 반복
int ans, button, N;
string channel;
vector<int> v;
int cnt = 0;
set<int> s;
string value="100";
int mi = 2147483647;
void dfs(string str) {
    if (str.size() > 0) {
        value = str;
        if(value!="0" && value[0]=='0') {
            value = value.substr(1, value.size());
        }
        if (mi > abs(stoi(str) - stoi(channel))+value.size()) {
            mi = abs(stoi(str) - stoi(channel))+value.size();
        }
    }
    if (str.size() <= 6) {
        for (int i = 0; i < v.size(); i++) {
            if(v[i]==0 && channel=="0") {
                mi =1;
                value = "0";
                return ;
            } else {
                if(str=="" && v[i]==0) {
                    dfs(str + to_string(v[i]));
                } else {
                    if(v[i]==0 && str=="0")
                        continue;
                    dfs(str + to_string(v[i]));
                }
            }
        }
    }
}

int main(void) {
    cin >> channel >> N;
    for (int i = 0; i <= 9; i++) {
        s.insert(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> button;
        s.erase(button);
    }
    for (auto itr = s.begin(); itr != s.end(); itr++) {
        v.push_back(*itr);
    }
    sort(v.begin(), v.end());


    dfs("");

    ans = min(mi, abs(stoi(channel) - 100));

    cout << ans;
    exit(0);
}