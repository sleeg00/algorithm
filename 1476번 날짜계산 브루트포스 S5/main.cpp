#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
//1476번 날짜 계산(브루트 포스)
int main() {
    int z, x, y;

    scanf("%d %d %d", &z, &x, &y);
    int E=0, S=0, M=0, i=0;

    while(1){
        E++;
        S++;
        M++;
        i++;
        if(E==z && S==x && M==y) {
            printf("%d", i);
            return 0;
        }
        if(E>=15)
            E=0;
        if(S>=28)
            S=0;
        if(M>=19)
            M=0;
    }
    return 0;
}
