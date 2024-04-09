/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, M;
int visit[1000001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

void bfs(int x) {
    pq.push(make_pair(0, x));
    visit[x] = 1;
    while (!pq.empty()) {
        int time = pq.top().first;
        int distance = pq.top().second;
        pq.pop();
        if (distance == M) {
            cout << time;
            break;
        }
        if (distance * 2 <= 1000000 && visit[distance * 2] == 0) {
            pq.push(make_pair(time, distance * 2));
            visit[distance * 2] = 1;
        }
        if (distance + 1 <= 1000000 && visit[distance + 1] == 0) {
            pq.push({time + 1, distance + 1});
            visit[distance + 1] = 1;
        }
        if (distance - 1 >= 0 && visit[distance - 1] == 0) {
            pq.push({time + 1, distance - 1});
            visit[distance - 1] = 1;
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    bfs(N);
}*/