/*
#include <algorithm>
#include <iostream>
#include <cstring> // For memset
using namespace std;

int N;
int arr[20001];
int v, e;
int visit[20001];
vector<vector<int>> vec;

bool dfs(int x) {
    if (visit[x] == 0) {
        visit[x] = 1;
    }
    for (int i = 0; i < vec[x].size(); i++) {
        if (visit[vec[x][i]] == 0) {
            if (visit[x] == 1) {
                visit[vec[x][i]] = 2;
                dfs(vec[x][i]);
            } else if (visit[x] == 2) {
                visit[vec[x][i]] = 1;
                dfs(vec[x][i]);
            } else if (visit[x] == 0) {
                visit[vec[x][i]] = 1;
                dfs(vec[x][i]);
            }
        } else if (visit[vec[x][i]] == visit[x]) {
            return false;
        }
    }
    return true;

}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N;
    vec.assign(20000, vector<int>(0, 0));
    for (int i = 0; i < N; i++) {
        cin >> v >> e;
        int sw = 0;
        int x, y;
        memset(visit, 0, 20000);
        for (int j=0; j<20000; j++) {
            vec[j].clear();
        }

        for (int j = 0; j < e; j++) {
            cin >> x >> y;
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        for (int j = 1; j <= v; j++) {
            if (vec[j].size() > 0 && visit[j] == 0) {
                if (dfs(j) == false) {
                    sw = 1;
                    cout << "NO" << '\n';
                    break;
                }
            }
        }

        if (sw == 0) {
            cout << "YES" << '\n';
        }
    }
}
 */