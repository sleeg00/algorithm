// 스도쿠

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;
// 가로, 세로 각각 9개씩 총 81개 칸
// 1~9까지 숫자
int arr[11][11];
vector<pair<int, int>> v;
set<int> s;
vector<int> sum;

bool check(int x, int y, int insert_value) {
    for (int i = 0; i < 9; i++) {
        if (arr[i][y] == insert_value || arr[x][i] == insert_value)
            return false;
    }
    int dx = (x / 3) * 3;
    int dy = (y / 3) * 3;
    for (int i = dx; i <= dx + 2; i++) {
        for (int j = dy; j <= dy + 2; j++) {
            if (arr[i][j] == insert_value) return false;
        }
    }
    return true;
}

void dfs(int value) {
    if (value >= v.size()) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        exit(0);
    } else {
        int x = v[value].first;
        int y = v[value].second;
        for (int i = 1; i <= 9; i++) {
            if (check(x, y, i)) {
                arr[x][y] = i;
                dfs(value + 1);
                arr[x][y] = 0;
            }
        }
    }
}


int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                v.push_back({i, j});
            }
        }
    }
    dfs(0);
}