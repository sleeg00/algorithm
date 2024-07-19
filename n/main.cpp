/*
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;


set<int> s;
set<int> value;
vector<int> solution(vector<int> v) {
    vector<int> answer;
    for(int i=0; i<v.size(); i++) {
        if(s.find(v[i])==s.end()) { // 존재하지 않는다면
            s.insert(v[i]);
        } else if(value.find(v[i])==value.end()){ // 존재한다면 즉, 중복된다면
            value.insert(v[i]);
            answer.push_back(v[i]);
        }
    }
    if (answer.size()==0){
        answer.push_back(-1);
    }
    return answer;
}

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int N,number;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> number;
        v.push_back(number);
    }

    vector<int> ans = solution(v);
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }

}
 */
/*

int main(void) {
    int N, checkByte = 8;
    string str;
    vector<int> v;
    vector<char> ans;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str == "BOOL") {
            v.push_back(1);
        } else if (str == "SHORT") {
            v.push_back(2);
        } else if (str == "FLOAT") {
            v.push_back(4);
        } else if (str == "INT") {
            v.push_back(8);
        } else if (str == "LONG") {
            v.push_back(8);
            v.push_back(8);
        }
    }

    int nowByte = 0;
    for (int i = 0; i < v.size(); i++) {
        int value = v[i];

        if (nowByte == 0) {
            if (value < 8) {
                if (i == v.size() - 1) {
                    for (int j = 0; j < value; j++) {
                        ans.push_back('#');
                    }
                    for (int j = 0; j < 8 - value; j++) {
                        ans.push_back('.');
                    }

                } else {
                    for (int j = 0; j < value; j++) {
                        ans.push_back('#');
                    }
                    nowByte += value;
                }
            } else if (value >= 8) {
                for (int j = 1; j <= value; j++) {
                    ans.push_back('#');
                    if (j % 8 == 0 && i != v.size() - 1) {
                        ans.push_back(',');
                    }
                }
            }
        } else if (nowByte != 0) {
            if (nowByte + value > 8) {
                for (int j = 0; j < 8 - nowByte; j++) {
                    ans.push_back('.');
                }
                ans.push_back(',');
                nowByte = 0;
                i--;
            } else {
                if (value == 1) {
                    ans.push_back('#');
                    nowByte++;
                } else {
                    if ((nowByte + value) % 4 == 0) {
                        for (int j = 0; j < value; j++) {
                            ans.push_back('#');
                        }
                        nowByte += value;
                    } else {
                        if (value == 4) {
                            for (int j = 0; j < (8 - (nowByte + value)) % 4; j++) {
                                ans.push_back('.');
                            }
                            for (int j = 0; j < value; j++) {
                                ans.push_back('#');
                            }
                            nowByte += (8 - (nowByte + value)) % 4 + value;
                        } else if (value == 2) {
                            for (int j = 0; j < (8 - (nowByte + value)) % 2; j++) {
                                ans.push_back('.');
                            }
                            for (int j = 0; j < value; j++) {
                                ans.push_back('#');
                            }
                            nowByte += (8 - (nowByte + value)) % 2 + value;
                        }
                    }
                }
                if (nowByte == 8 && i != v.size() - 1) {
                    nowByte = 0;
                    ans.push_back(',');
                }
            }
        }
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j];
        }
        cout << endl;
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
}

*/