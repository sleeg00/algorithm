/*
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 방향성이 없는 그래프
// 1번 정점 -> N번  정점 최단 거리 이동
// 두가지 조건을 만족하면서 이동하는 특정 최단 경로
// 1. 임의로 주어진 두 정점은 반드시 통과해야 한다.
// 모든 정점을 다시 이동할 수 있다. 하지만 반드시 최단 경로
//
// 최단 경로를 2 -> 3, 3 <- 2를 반드시 거쳐야 한다.
int N, E, v1, v2;
int dist[200002];

void resetDistance() {
    for (int i = 1; i <= N; i++) {
        dist[i] = 2147483646;
    }
}

void Dij(int start_node, vector<vector<pair<int, int>>> v) {
    resetDistance();
    priority_queue<pair<int, int>> pq;
    pq.push({0, start_node});
    dist[start_node] = 0;
    while (!pq.empty()) {
        int node = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        for (int i = 0; i < v[node].size(); i++) {
            int next_cost = v[node][i].second;
            int next_node = v[node][i].first;

            if (dist[next_node] > (cost + next_cost)) {
                dist[next_node] = (cost + next_cost);
                pq.push({-(cost + next_cost), next_node});
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> E;

    vector<vector<pair<int, int>>> v(N + 1);
    int x, y, weight;
    for (int i = 0; i < E; i++) {
        cin >> x >> y >> weight;
        v[x].push_back({y, weight});
        v[y].push_back({x, weight});
    }
    cin >> v1 >> v2;

    Dij(1, v);
    long long first_v1 = dist[v1];
    long long second_v2 = dist[v2];

    Dij(v1, v);
    long long end_n = dist[N];
    long long end_v2 = dist[v2];

    Dij(v2, v);
    long long end_n2 = dist[N];

    long long result = min((first_v1 + end_v2 + end_n2), (second_v2 + end_v2 + end_n));

    if (result >= 2147483646) {
        cout << -1;
    } else {
        cout << result;
    }
}
*/