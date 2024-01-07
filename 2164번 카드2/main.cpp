/*
#include <stdio.h>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int N;
queue<int> q;

int main() {
    int bottom;
    bottom = 1;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        q.push(i);
    }

    while (true) {
        if (q.size()==1) {
            break;
        }
        q.pop();
        bottom = q.front();
        q.pop();
        q.push(bottom);
    }

    printf("%d", bottom);
    return 0;
}
 */