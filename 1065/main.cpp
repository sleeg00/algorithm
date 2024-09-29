#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 정수 X의 각 자리가 등차수열
// 1 -> 1
// 11,
// 111, 121, 131,141,151,161,171,181,191
//
// 등차수열 = 연속된 두개의 수 차이가 같음

int N;

int cnt=0;
int main(void) {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        string s = to_string(i);
        int value;

        for(int j=0; j<s.size(); j++) {
            if(j==s.size()-1) {
                cnt++;
                break;
            } else if(j==0){
                value = s[j]-s[j+1];
            } else if(value != s[j]-s[j+1]){
                break;
            }
        }
    }
    cout << cnt;
}