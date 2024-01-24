// M X N
// 갈수 있는 경우를 찾아야 한다. 0일때
// 입력(0,2) (4,4)

#include <iostream>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int M, N, space;
int a[101][101];
int visit[101][101];
int mv[4][2] = {{-1, 0},
                {1,  0},
                {0,  -1},
                {0,  1}};
multiset<int, less<int>> s;

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    visit[x][y] = 1;
    int cnt = 1;
    while (!q.empty()) {
        int x1 = q.front().first;
        int y1 = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int dx = x1 + mv[i][0];
            int dy = y1 + mv[i][1];
            if (dx >= 1 && dx <= N && dy >= 0 && dy < M) {
                if (a[dx][dy] == 0 && visit[dx][dy] == 0) {
                    visit[dx][dy] = 1;
                    cnt++;
                    q.push(make_pair(dx, dy));
                }
            }
        }
    }
    s.insert(cnt);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x1, y1, x2, y2;

    cin >> N >> M >> space;

    for (int i = 0; i < space; i++) {
        cin >> y1 >> x1 >> y2 >> x2;
        for (int j = N-x1; j > N-x2; j--) {
            for (int k = y1; k <y2; k++) {
                a[j][k] = 1;
                visit[j][k] = 1;
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            if (a[i][j] == 0 && visit[i][j] == 0) {
                bfs(i, j);
            }
        }
    }
    cout << s.size() << "\n";
    for (auto itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
}