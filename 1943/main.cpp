/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int N, Q;
int x, y, value;
vector<vector<pair<int,int>>> arr;

void bfs(int k, int v) {
    int cnt=0;
    vector<int> visit(N+1,false);
    visit[v]=true;
    queue<pair<int, int>> q;
    q.push({v, k});

    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();

        for(int i=0; i<arr[first].size(); i++) {
            int next = arr[first][i].first;
            int cost = arr[first][i].second;
            if(!visit[next] && cost >= k) {
                visit[next]=true;
                cnt++;
                q.push({next, cost});
            }
        }
    }
    cout << cnt << '\n';

    return ;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N >> Q;
    arr.assign(N + 1, vector<pair<int, int>>(0, {0, 0}));
    for (int i = 0; i < N - 1; i++) {
        cin >> x >> y >> value;
        arr[x].push_back({y,value});
        arr[y].push_back({x,value});
    }

    for (int i = 0; i < Q; i++) {
        cin >> x >> y;
        bfs(x, y);
    }
}
 */