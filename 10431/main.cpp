// 키큰애가 후순위 -> 같은 키는 없음
// 아무나 뽑아 맨 앞에
// 앞에 키가 큰 학생이 없다면 그대로
// 키큰 친구가 있다면 그중 가장 앞에 있는 학생 바로 앞에 선뒤 키큰 학생 뒤 자리는 만든

/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M, number, hap;
    vector<int> v;
    vector<int> dap;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M;
        dap.push_back(M);
        v.clear();
        for (int j = 0; j < 20; j++) {
            cin >> number;
            v.push_back(number);
        }
        hap = 0;
        for (int j = 0; j <19; j++) {
            for (int k = j+1; k < 20; k++) {
                if (v[j] > v[k]) {
                    int im = v[j];
                    v[j]=v[k];
                    v[k]=im;
                    hap++;
                }
            }
        }
        dap.push_back(hap);
    }

    for (auto itr = dap.begin(); itr != dap.end(); itr += 2) {
        cout << *itr << " " << *(itr + 1) << '\n';
    }
}
 */