// 바로 옆에 다른 색 -> 뛰어넘음
// 1 3 1 1 3
// 1 0 0 1 0 1 0 0 1 1
// -> RED = 3번
// -> BLUE = 5번?

// 8
// 0 0 1 0 0 0 0 1
// -> RED 1
// -> 많음

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int red = 0, blue = 0, red_count = 0, blue_count = 0;
    int bred = 0, bblue = 0, bred_count = 0, bblue_count = 0;
    int N;
    string color;
    cin >> N;
    cin >> color;
    for (int i = 0; i < color.length() - 1; i++) {
        if (color[i] != color[i + 1] && color[i] == 'R') {
            red++;
            red += red_count;
            red_count = 0;
        }
        if (color[i] != color[i + 1] && color[i] == 'B') {

            blue++;
            blue += blue_count;
            blue_count = 0;
        }
        if (color[i] == color[i + 1] && color[i] == 'R') {
            red_count++;
        }
        if (color[i] == color[i + 1] && color[i] == 'B') {
            blue_count++;
        }
    }
    for (int i = color.length()-1; i>=1; i--) {
        if (color[i] != color[i - 1] && color[i] == 'R') {
            bred++;
            bred += bred_count;
            bred_count = 0;
        }
        if (color[i] != color[i - 1] && color[i] == 'B') {

            bblue++;
            bblue += bblue_count;
            bblue_count = 0;
        }
        if (color[i] == color[i - 1] && color[i] == 'R') {
            bred_count++;
        }
        if (color[i] == color[i - 1] && color[i] == 'B') {
            bblue_count++;
        }
    }
    cout << min(min(bred, bblue), min(red, blue));
}