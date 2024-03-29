// N X N
// A[r][c]
// 두 나라의 인구 차이 L 명 이상 R 명 이하라면 국경성 오픈.
// 인구 이동 시작
// 열려 있어 인접한 칸 => 연합
// 연합의 인구수 => (연합 인구수 / 연합을 이루고 있는 칸의 개수)
// 해체하고 국경선 닫기

// 50 * 50 = 2500
// L <= 상하좌우 값 비교 <= R이면 큐에 삽입 visit에 체크 visit==0일때 탐색  6천만 시간 충분

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, L, R;
int a[51][51] = {0};
int visit[51][51] = {0};
int mv[4][2] = {{-1, 0},
                {1,  0},
                {0,  -1},
                {0,  1}};
queue<pair<int, int>> q;
queue<pair<int, pair<int, int>>> value;
queue<pair<int, int>> k;

long long bfs(int check, int x, int y) {
    q.push(make_pair(x, y));
    value.push(make_pair(check, make_pair(x, y)));

    long long cnt = 0;
    long long change = 0;
    cnt += a[x][y];

    while (!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int dx = x1 + mv[i][0];
            int dy = y1 + mv[i][1];
            if (dx >= 0 && dx < N && dy >= 0 && dy < N) {
                if (visit[dx][dy] == 0 && abs(a[dx][dy] - a[x1][y1]) >= L && abs(a[dx][dy] - a[x1][y1]) <= R) {
                    visit[x1][y1] = 1;
                    visit[dx][dy] = 1;
                    q.push(make_pair(dx, dy));
                    value.push(make_pair(check, make_pair(dx, dy)));
                    cnt += a[dx][dy];
                    change++;
                }
            }
        }
    }
    if (change > 0) {
        k.push(make_pair(change, cnt));
    }
    return cnt;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int day = 0;
    long long checker = 0;
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }
    for (int w = 0; w < 10; w++) {

        int cnt2 = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (visit[i][j] == 0) {
                    checker = bfs(k.size()+1, i, j);
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << visit[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl << endl;
        if (cnt2 == N * N) {
            break;
        }

        int sw = 1;
        while (!k.empty()) {
            int changeNumber = k.front().first;
            int changeValue = k.front().second;
            long long v = changeValue / changeNumber;
            cout << "sw:" << sw << endl;
            while (!value.empty()) {
                int z = value.front().first;
                int x = value.front().second.first;
                int y = value.front().second.second;
                cout << "z:" << z << "x:" << x << "y:" << y << endl;

                if (sw == z) {
                    a[x][y] = v;
                } else {
                   break;
                }
                value.pop();
            }
            k.pop();
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                visit[i][j] = 0;
            }
        }
        day++;
    }
    cout << "day:" <<day;
}
