/*
#include <algorithm>
#include <iostream>

using namespace std;

string str, second_str;
int Dp[1001][1001];
int main(void) {
    cin >> str >> second_str;

    for(int i=1; i<=str.size(); i++) {
        for(int j=1; j<=second_str.size(); j++) {
            if(str[i-1]==second_str[j-1]) {
                Dp[i][j] = Dp[i - 1][j - 1] + 1;
            } else {
                Dp[i][j] = max(Dp[i][j - 1], Dp[i - 1][j]);
            }
        }
    }
    cout << Dp[str.size()][second_str.size()];
}
 */