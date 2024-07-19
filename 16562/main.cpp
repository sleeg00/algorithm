/*
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

vector<vector<int>> v;
int money;
int parent[10001];
int cost[10001];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
    int a = find(x);
    int b = find(y);
    if (a != b) {
        if (cost[a] > cost[b]) {
            parent[a] = b;
        } else {
            parent[b] = a;
        }
    }
}

int main(void) {

    int N, M, x, y;
    int out=0;
    cin >> N >> M >> money;
    for (int i = 1; i <=N; i++) {
        cin >> cost[i];
    }
    for (int i = 0; i <=N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        merge(x, y);
    }
    set<int> s;
    for(int i=1; i<=N; i++) {
        s.insert(find(i));
    }

    for(auto itr = s.begin(); itr!=s.end(); itr++) {
        out+=cost[*itr];
        money -= cost[*itr];
    }
    if(money>=0) {
        cout << out;
    } else {
        cout << "Oh no";
    }
}
 */