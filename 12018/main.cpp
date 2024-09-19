#include <algorithm>
#include <iostream>

using namespace std;
// 수강신청 마일리지 제도
// 과목당 1 ~ 36 마일리지
// 마일리지를 많이 투자한 순으로 그 과목의 수강신청인원 만큼 신청되는 방식
// 마일리지를 볼 수 있다.
// 주어진 마일리지로 최대한 많은 과목 신청
// 한 과목에 1 ~ 36
// 5과목 76마일리지
// 각 과목 신청한 사람 수 (Pi)5 , 수강인원 (Li) 4
// 36, 25, 1, 36, 36
int N, M;
int P, L;
int mil, cnt=0;
vector<int> ans;
vector<int> v;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> P >> L;
        for (int j = 0; j < P; j++) {
            cin >> mil;
            v.push_back(mil);
        }
        if (P < L) {
            ans.push_back(1);
            v.clear();
        } else {
            sort(v.begin(), v.end(), greater<int>()); // 내림차순
            ans.push_back(v[L-1]);
            v.clear();
        }
    }
    sort(ans.begin(), ans.end());
    int i=0;
    while(i<=ans.size()-1) {
        if(M-ans[i]>=0) {
            M -= ans[i];
            cnt++;
        } else {
            break;
        }
        i++;
    }
    cout << cnt;
}