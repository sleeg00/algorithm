
/*
 * // 키워드 입력 (키워드 -> Map??)
// 서로 다름 -> map 예상 총 N개
// 최대 10개의 키워드
// 키워드는 지워진다.
// N 키워드 개수, 쓴 글의 개수 M
// map<String>을 써서 체크 후 N+1부터 remove 그리고 사이즈 출력
// 유의사항 N,M이 엄청 크다 string 입력 -> remove로도 가능할 듯?
// 2,000,000 -> 2억미만 2초 초과 안함 맵이나 string이나 순회는 다르지 않을 듯?

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> key_word;
    long long N, M;
    string str;
    cin >> N >> M;


    for (long long i = 0; i < N; i++) {
        cin >> str;
        key_word.insert(str);
    }

    for (long long j = 0; j < M; j++) {
        string word;
        cin >> str;
        str += ',';
        long long start = 0;
        long long i = 0;
        if (key_word.size() != 0) {
            while (true) {
                start = str.find(',');
                word = str.substr(0, start);

                key_word.erase(word);

                if (start == str.length() - 1) {
                    break;
                }

                i = start + 1;
                str = str.substr(i, str.length());
            }
        }
        cout << key_word.size() << '\n';
    }
}
 */