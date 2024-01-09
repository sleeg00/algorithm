#include <stdio.h>
#include <queue>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int N, number;
vector<int> v;
int main() {

    scanf("%d", &N);

    for (int i = 0; i < N * N; i++) {
        scanf("%d", &number);

        pq.push(number);
        if (pq.size() > N) {
            pq.pop();
        }
    }
    printf("%d", pq.top());
    return 0;
}