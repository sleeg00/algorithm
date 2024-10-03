/*
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// 알파벳 소문자
// N개 단어, 조건에 따라 정렬
// 1. 길이가 짧은 것부터 정렬
// 2. 길이가 같으면 사전 순으로 (크기)
// 중복된 단어는 하나만 남기고 제거
// 1 <= N <= 20,000 (2만), 단어 길이 <= 50
bool cmp(pair<string, int> p1, pair<string, int> p2) {
    if(p1.first.length() != p2.first.length()) {
        return p1.first.length() < p2.first.length();
    }
    return p1.first < p2.first;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    string str;
    map<string, int> m;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str;
        m.insert({str, i});
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);
    for(auto itr = v.begin(); itr!=v.end(); itr++) {
        cout << itr->first << endl;
    }
}
 */