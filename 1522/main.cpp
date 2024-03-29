// a와 b로만 이루어져 있음.
// a를 모두 연속으로 만들어야 한다.
// 처음이랑 끝은 연결되어 있는 구조다. 동그라미
// 그리디? -> b가 a랑 바꿔주고 추후 건너뜀
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int start, end, start_to_end;
    int check_start, check_end;
    int ma;
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'a') {
                start = j;
            }
            if (str[j] == 'a' && start > 0) {
                end = j;
                start_to_end = end - start;
            }
            if (ma < start_to_end) {
                ma = start_to_end;
                check_start = start;
                check_end = end;
            }
        }
    }
}*/