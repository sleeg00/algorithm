/*
// 언어 AC
// 정수 배열 연산
// R(뒤집기), D(버리기)
// R ( 수의 순서 뒤집기)
// D ( 첫 번째 수 버리기)
// TestCase <= 100
// 함수 p 1 <= P <= 100,000
// 수 0 <= N <= 100,000
// 1 <= xi <=100

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int T, arr_size;
string command;
string numbers;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> T;
    deque<int> number;
    for (int i = 0; i < T; i++) {
        int sw = 0;
        int cnt = 0;
        cin >> command >> arr_size >> numbers;
        string temp = "";
        for(int j=0; j<numbers.size(); j++) {
            if(numbers[j]=='[') continue;
            else if(numbers[j]>='0' && numbers[j]<='9') {
                temp+=numbers[j];
            } else if((numbers[j]==',' || numbers[j]==']')&& temp!="") {
                number.push_back(atoi(temp.c_str()));
                temp="";
            }
        }
        for (int j = 0; j < command.size(); j++) {
            if (command[j] == 'R') {
                cnt++;
                continue;
            }
            if (number.size() == 0) {
                sw = 1;
                break;
            }
            if (cnt % 2 == 0) {
                number.pop_front();
            } else if (cnt % 2 == 1) {
                number.pop_back();
            }
        }

        if (sw == 1) {
            cout << "error" << '\n';
        } else {
            cout << '[';
            if (number.size() > 0) {
                if (cnt % 2 == 1) {
                    for (int j = number.size() - 1; j >= 1; j--) {
                        cout << number[j] << ',';
                    }
                    cout << number[0];
                } else {
                    for (int j = 0; j < number.size() - 1; j++) {
                        cout << number[j] << ',';
                    }
                    cout << number[number.size() - 1];
                }
            }
            cout << ']' << '\n';
        }
        number.clear();
    }
}
 */