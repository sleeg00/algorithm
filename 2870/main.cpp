/*
#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(const string &value, const string &valueY) {
    if (value.length() < valueY.length()) { // 길이다 거 긴것으로 오름차순
        return true;
    }
    if (value.length() == valueY.length() && value < valueY) { //길이가 같고 값으로 오름차순
        return true;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int cnt = 0, sw = 0, checkEnd, check;
    string M;
    vector<string> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cnt = 0;
        cin >> M;
        int j = 0;
        while (true) {
            if (sw > 0 && M[j] >= '0' && M[j] <= '9') {
                sw++;
                checkEnd = j;
            }
            if (M[j] >= '0' && M[j] <= '9' && sw == 0) {
                sw++;
                check = j;
                checkEnd = j;
            }
            if (sw > 0 && M[j] < '0' || sw > 0 && M[j] > '9' || sw > 0 && j == M.length() - 1) {
                string str = "";

                    for (int k = check; k <= checkEnd; k++) {
                        if (M[k] == '0' && checkEnd - check != 0 && str=="") {
                            continue;
                        } else {
                            str += M[k];
                        }
                    }
                if (str==""){
                    str="0";
                }
                sw = 0;
                v.push_back(str);
            }
            j++;
            if (j == M.length()) {
                break;
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << endl;
    }
    return 0;
}
 */