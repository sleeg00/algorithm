// 최소 -> BFS
// 1000000 , 백만
// 총 F 층, 스타트링크 G층에 존재, 현재 S층 엘리베이터 -> G층으로 이동 U-> UP D -> Down
// 10 1 10 2 1
// F  S  G U D
// 총 10층 10층에 스타트링크 존재 현재 1층 2번 위로 이동 가능 1번 밑으로 이동 가능
// 한번 이동한 곳은 가면 안될 거 같은 느낌 -> 시간초과
// visit에 체크 도착하면 종료
// 현재 100층 1층에 스타트링크 존재 현재 2층 위로 1칸 이동 가능 밑으로 0칸 이동 가능
// 식 만들기 (현재층 * U)-D <=G
// 1000 1 1000 500 1
/*
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int F, S, G, U, D;
unordered_map<long long, long long> m;
queue<pair<long long, long long>> q;

long long bfs() {
    m.insert(make_pair(S, 1));
    while (!q.empty()) {
        long long f = q.front().first;
        long long second = q.front().second;
        if (f == G) {
            return second;
        }
        q.pop();
        if (m.find(f + U) == m.end() && f + U >= 1 && f + U <= F) {
            q.push(make_pair(f + U, second + 1));
            m.insert(make_pair(f + U, 1));
        }
        if (m.find(f - D) == m.end() && f - D >= 1 && f - D <= F) {
            q.push(make_pair(f - D, second + 1));
            m.insert(make_pair(f - D, 1));
        }
    }
    return -1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> F >> S >> G >> U >> D;
    q.push(make_pair(S, 0));
    long long value = bfs();
    if (value == -1) {
        cout << "use the stairs";
    } else {
        cout << value;
    }
}
 */