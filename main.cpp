#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int gcd(int x, int y) {
    if(y==0) return x;
    return gcd(y, x%y);
}


int main() {
    int n,m;
     scanf("%d %d", &n ,&m);

    int ma = max(n,m);
    int mi = min(n,m);

    int g = gcd(ma, mi);

    printf("%d\n%d", g, ma*mi/g);
    return 0;
}