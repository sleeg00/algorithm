/*
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
 */
// [PCCE 기출] 10번/ 데이터분석
/*
 * #include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int sort_align;
bool comp(vector<int> v, vector<int> v1) {
    return v[sort_align] < v1[sort_align];
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    int number;
    if (ext =="code") {
        number=0;
    } else if(ext=="date") {
        number =1;
    } else if(ext=="maximum") {
        number = 2;
    } else if(ext=="remain") {
        number = 3;
    }
    if(sort_by == "code") {
        sort_align = 0;
    } else if(sort_by == "date") {
        sort_align = 1;
    } else if(sort_by=="maximum") {
        sort_align = 2;
    } else {
        sort_align = 3;
    }
    vector<vector<int>> answer;
    for(int i=0; i<data.size(); i++) {
        if(data[i][number]<val_ext) {
            answer.push_back(data[i]);
        }
    }
    sort(answer.begin(), answer.end(), comp);
    return answer;
}
 */