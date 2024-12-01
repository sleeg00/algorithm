/*
#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V, E, K;
int dist[200002];

void Dij(int start_node, vector<vector<pair<int, int>>> v) {
    priority_queue<pair<int, int>> pq;
    pq.push({0, start_node});
    dist[start_node]=0;
    while (!pq.empty()) {

        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (int i = 0; i < v[node].size(); i++) {
            int next_node = v[node][i].first;
            int next_cost = v[node][i].second;
            if (dist[next_node] > cost + next_cost) {
                dist[next_node] = cost + next_cost;
                pq.push({-(cost+next_cost), next_node});
            }
        }
    }
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> V >> E >> K;

    vector<vector<pair<int, int>>> v(V + 1);

    int x, y, w;
    for (int i = 1; i <= E; i++) {
        cin >> x >> y >> w;
        v[x].push_back({y,w});
    }
    for (int i = 1; i <= V; i++) { // 거리 초기화
        dist[i] = 2147483646;
    }

    Dij(K, v);

    for (int i = 1; i <= V; i++) {
        if (dist[i] == 2147483646) {
            cout << "INF" << '\n';
        } else {
            cout << dist[i] << '\n';
        }
    }
}
 */