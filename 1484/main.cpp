/*
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// 다이어트
// G Kg -> 현재 무게*제곱 - 과거 몸무게*제곱
// 현재 몸무게로 가능한 것을 모두 출력
// 1 <= G <= 100,000 (10만)
// now_g * now_g - back_g*back_g = G
// ex)
//      8 * 8 - back_g * back_g = 15
// 결국 제곱수 - 제곱수 = 15인 것을 찾는 것
//
int G;
long long arr[100005];


int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> G;
    for (int i = 1; i < 100005; i++) {
        arr[i] = i * i;
    }

    int left = 1, right = 2;
    vector<int> v;
    while (left < right && right <= 100005) {
        if (arr[right] - arr[left] == G) {
            v.push_back(right);
        }
        if (arr[right] - arr[left] < G) {
            right++;
        } else  {
            left++;
        }
    }
    if (v.size() ==0) {
        cout << -1;
        return 0;
    }
    sort(v.begin(), v.end());
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr;
        if(itr+1 != v.end()) {
            cout << '\n';
        }
    }
}
 */