#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <iostream>

/*
using namespace std;
int b[100001];
int ma=-2147483647;
int main(void){

    int a[100001];
    int n;

    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }

    b[1]=a[1];
    for(int i=2; i<=n; i++) {

        if(a[i]>a[i]+b[i-1])
            b[i]=a[i];
        else
            b[i]=a[i]+b[i-1];

    }

    for(int i=1; i<=n; i++) {
        if(b[i]>ma)
            ma=b[i];

    }
    printf("%d", ma);
*/