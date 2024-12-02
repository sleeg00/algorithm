#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long dist[1000];

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    int start_node, end_node, weight;
    vector<pair<pair<int, int>, int>> v;

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> start_node >> end_node >> weight;
        v.push_back({{start_node, end_node}, weight});
    }
    for (int i = 1; i <= N; i++) {
        dist[i] = 2147483646;
    }
    dist[1] = 0;

    for (int i = 1; i <= N - 1; i++) {
        for (int j = 0; j < v.size(); j++) {
            int from = v[j].first.first;
            int to = v[j].first.second;
            int cost = v[j].second;

            if (dist[from] != 2147483646 && dist[to] > dist[from] + cost) {
                dist[to] = dist[from] + cost;
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        int from = v[i].first.first;
        int to = v[i].first.second;
        int cost = v[i].second;

        if (dist[from] != 2147483646 && dist[to] > dist[from] + cost) {
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i=2; i<=N; i++) {
        if(dist[i] == 2147483646)
            cout << -1 << '\n';
        else
            cout << dist[i] << '\n';
    }
}
