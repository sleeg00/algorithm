// 풀고싶은 문제를 정해놓고 글을 올림. 해결한 경우 파란색 해결못했을 경우 빨간색
// 임의 문제들 선택 -> 그리디
// 0 = BLUE, 1 = RED
// 연속된 0 이 존재하면 1번으로 체크
/*
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int count_red=0, count_blue=0;
    vector<int> blue;
    vector<int> red;
    string color;

    cin >> N;
    cin >> color;
    color[color.length()]='C';
    for (int i = 0; i <=color.length(); i++) {
        if (color[i] == 'R') {
            count_red++;
        }

        if (color[i] == 'B') {
            count_blue++;
        }

        if (count_red > 0 && color[i + 1] != color[i]) {
            red.push_back(count_red);
            count_red=0;
        }

        if (count_blue > 0 && color[i + 1] != color[i]) {
            blue.push_back(count_blue);
            count_blue=0;
        }
    }

    if (red.size() > blue.size()) {
        cout << blue.size()+1;
    } else {
        cout << red.size()+1;
    }
}
 */