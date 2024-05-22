/*
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> pq;
priority_queue<int> mi;
int N, number;
int hap = 0;

int main(void) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number;
        if (number > 0) {
            pq.push(number);
        } else {
            mi.push(-number);
        }
    }

    while (!pq.empty()) {
        if (pq.size() == 1) {
            hap += pq.top();
            break;
        }
        int x = pq.top();
        pq.pop();
        if (pq.size() >= 1 && pq.top() != 1 && x != 1) {
            hap += x * pq.top();
            pq.pop();
        } else if (pq.top() == 1 || x == 1) {
            hap += x + pq.top();
            pq.pop();
        }
    }
    while (!mi.empty()) {

        if (mi.size() == 1) {
            hap += -mi.top();
            break;
        }
        int x = mi.top();
        mi.pop();
        if (mi.size() >= 1) {
            hap += x * mi.top();
            mi.pop();
        }
    }
    cout << hap;
}
 */