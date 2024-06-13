#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> targets) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int answer = 0;

    int ma=0;
    int mi=2147483647;
    int cnt=0;

    sort(targets.begin(), targets.end());
    for(int i=0; i<targets.size(); i++) {
        int x = targets[i][0];
        int y = targets[i][1];

        if(x >= mi) {
            cnt++;
            ma=0;
            mi=2147483647;
        }
        if( i==targets.size()-1) {
            cnt++;
        }
        ma = max(x, ma);
        mi = min(y, mi);

    }
    answer = cnt;
    return answer;
}