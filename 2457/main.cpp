#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<pair<int, int>, pair<int, int>>> v;
int x, y, dx, dy;
int max_month = 0, max_day = 0;
int min_month = 0, min_day = 0;
int cnt = 1;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int index;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x >> y >> dx >> dy;
        v.push_back({{x,  y},
                     {dx, dy}});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        if (v[i].first.first < 3) { // 3월1일에 피는 것들만
            if (v[i].second.first > max_month) { // 그중 가장 기간이 긴것만
                max_month = v[i].second.first;
                max_day = v[i].second.second;
            } else if (v[i].second.first == max_month && v[i].second.second >= max_day) {
                max_month = v[i].second.first;
                max_day = v[i].second.second;
            }
        } else if (v[i].first.first == 3 && v[i].first.second == 1) {
            if (v[i].second.first > max_month) { // 그중 가장 기간이 긴것만
                max_month = v[i].second.first;
                max_day = v[i].second.second;
            } else if (v[i].second.first == max_month && v[i].second.second >= max_day) {
                max_month = v[i].second.first;
                max_day = v[i].second.second;
            }
        } else { // 3월 1일보다 시작 점이 큰것들
            if (v[i].first.first < max_month) { // max_month = 3 , max_day = 3
                if (min_month < v[i].second.first) {
                    min_month = v[i].second.first;
                    min_day = v[i].second.second;
                } else if (min_month == v[i].second.first && min_day <= v[i].second.second) {
                    min_month = v[i].second.first;
                    min_day = v[i].second.second;
                }
                if(v[i].second.first>11) {
                    cout << cnt+1;
                    return 0;
                }
                if(v[i].second.first>11 && v[i].first.first<max_month ||
                   v[i].second.first>11 && v[i].first.first==max_month && v[i].first.second<=max_day) {

                    cout << cnt+1;
                    return 0;
                }
            } else if (v[i].first.first == max_month && v[i].first.second <= max_day) {
                if (min_month < v[i].second.first) { //min_month = 9, max_day = 9
                    min_month = v[i].second.first;
                    min_day = v[i].second.second;
                } else if (min_month == v[i].second.first && min_day <= v[i].second.second) {
                    min_month = v[i].second.first;
                    min_day = v[i].second.second;
                }
                if(v[i].second.first>11) {
                    cout << cnt+1;
                    return 0;
                }
                if(v[i].second.first>11 && v[i].first.first<max_month ||
                   v[i].second.first>11 && v[i].first.first==max_month && v[i].first.second<=max_day) {
                    cout << cnt+1;
                    return 0;
                }
            } else {

                max_month = v[i].second.first;
                max_day = v[i].second.second;
                cnt++;

                if(v[i].second.first>11 && v[i].first.first<max_month ||
                v[i].second.first>11 && v[i].first.first==max_month && v[i].first.second<=max_day) {

                    cout << cnt+1;
                    return 0;
                }


            }
        }

        if (max_month > 11) {
            cout << cnt;
            return 0;
        } else if (max_month == 11 && max_day > 30) {
            cout << cnt;
            return 0;
        }

    }
    if (max_month > 11) {
        cout << cnt;
    } else if (max_month == 11 && max_day > 30) {
        cout << cnt;
    } else {
        cout << 0;
    }
}