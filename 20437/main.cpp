/*
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, int> map;
int T; // 문자열 게임의 수
int K; //
string word;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> word;
        cin >> K;
        vector<int> arr[26];
        for (int j = 0; j < word.length(); j++) {
            arr[word[j] - 'a'].push_back(j);
        }
        int ans_max = -1;
        int ans_min = 2147483647;
        for (int j = 0; j < 26; j++) {
            if (arr[j].size() >= K) {
                int left = 0;
                int right = K - 1;

                int checkMin = arr[j][right] - arr[j][left] + 1;
                int checkMax = arr[j][right] - arr[j][left] + 1;
                while (right < arr[j].size() - 1) {
                    right++;
                    left++;
                    checkMin = min(checkMin, arr[j][right] - arr[j][left] + 1);
                    checkMax = max(checkMax, arr[j][right] - arr[j][left] + 1);
                }
                ans_max = max(checkMax, ans_max);
                ans_min = min(checkMin, ans_min);
            }

        }
        if (ans_min == 2147483647) {
            cout << -1 << '\n';
        } else {
            cout << ans_min << " " << ans_max << '\n';
        }
    }
}*/