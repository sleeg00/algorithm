/*
#include <algorithm>
#include <iostream>

using namespace std;

// 2초, 128MB
// 12:27
// 666 종말 수
// 어떤 수에 6이 적어도 3개 이상 연속으로 들어가는 수
// 제일 작은 수 "666", "1666", "2666", "3666" ..
// N번째로 작은 종말의 수 구하기
// N <= 10,000
// 9666, 10666, 11666
// 60666, 666,000
// 1,2,3,4,5,6660, 6661,..6669, 16660, 16661...16669, 26660
vector<string> v;

int main(void) {
    int N;
    cin >> N;
    int result =665;
    for(int i=0; i<N; i++) {
        while(true) {
            result++;
            string temp = to_string(result);
            if(temp.find("666")!=-1)
                break;
        }
    }
    cout << result << endl;
}
 */