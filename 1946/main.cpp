/*
#include <algorithm>
#include <iostream>

using namespace std;

int N;
int M;
int sub_value, see_value;
vector<pair<int, int>> v;

bool cmp(pair<int, int> p, pair<int, int> q) {
    return p.first < q.first;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M;
        for (int j = 0; j < M; j++) {
            cin >> sub_value >> see_value;
            v.push_back({sub_value, see_value});
        }
        sort(v.begin(), v.end(), cmp);


        int compare_first_value = (*v.begin()).first;
        int compare_second_value = (*v.begin()).second;
        for (auto itr = v.begin(); itr != v.end(); itr++) {
            int first = (*itr).first;
            int second = (*itr).second;
            if (first <= compare_first_value || second <= compare_second_value) {
                compare_first_value = first;
                compare_second_value = second;
                ans++;
            }
        }
        cout << ans << '\n';
        v.clear();
        ans=0;
    }
}
 */