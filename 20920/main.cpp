// 효울적인 단어 암기
// 우선순위
// 1. 자주 나오는 단어일수록 앞에 배치
// 2. 해당 단어의 길이가 길수록 앞에 배치
// 3. 알파벳 사전 순으로 앞에 있는 단어 일수록 알페 배치
// 14:35
// 1 <= 단어 개수(N) <= 100,000
// 1 <= 단어 길이 기준(M) <= 10

// 1. M보다 작은 단어는 추가하지 않는다.
// 2. Hash_map에 단어 횟수 cnt++
// cmp로 자주 나오는 단어 먼저 , 같다면 단어 일기로 같다면 알파벳 사전 순으로 정렬

#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int N, M;
string str;
vector<string> v;
unordered_map<string, int> m;

bool cmp(string p1, string p2) {
   if (m[p1] == m[p2]) {
        if (p1.length() == p2.length()) {
            return p1 < p2;
        }
        return p1.length() > p2.length();
    }
    return m[p1] > m[p2];
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str.length() >= M) {
            auto itr = m.find(str);
            if (itr == m.end()) {
                v.push_back(str);
                m.insert({str, 1});
            } else {
                m[str] = m[str] + 1;
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}