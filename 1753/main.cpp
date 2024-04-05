/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, M;
int start;
int x, y, weight;
int INF = 9999999;
vector<pair<int, int>> v[200001];
int visit[20001]={0};
int d[20001];

void dij(int st) {

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        int current = pq.top().second;
        int distance = pq.top().first;
        pq.pop();
        if (visit[current] != 0)
        {
            continue;
        }
        visit[current] = 1;

        for (int i = 0; i < v[current].size(); i++) {
            int next = v[current][i].first;
            int nextDistance = distance + v[current][i].second;

            if (nextDistance < d[next]) {
                d[next] = nextDistance;
                pq.push(make_pair(d[next], next));
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    cin >> start;

    fill(d, d + 20001, INF);
    for (int i = 0; i < M; i++) {
        cin >> x >> y >> weight;

        v[x].push_back(make_pair(y, weight));
    }

    dij(start);
    for (int i = 1; i <= N; i++) {
        if (i==start) {
            cout << 0 <<'\n';
        } else if (d[i] == INF) {
            cout << "INF" <<'\n';
        } else {
            cout << d[i] << '\n';
        }
    }
}
 */