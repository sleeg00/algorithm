/*
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;



int main() {
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    int N;
    long long number;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%lld", &number);

        if (number == 0) {
            if (pq.empty()) {
                printf("0\n");
            } else {
                printf("%lld\n", pq.top());
                pq.pop();
            }
        } else {
            pq.push(number);
        }
    }
}
*/