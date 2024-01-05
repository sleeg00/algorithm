/*
#include<stdio.h>


long a[100];
int main() {
    int n;
    scanf("%d", &n);

    a[0]=1;
    a[1]=1;

    for(int i=2; i<=n; i++)
        a[i]=a[i-1]+a[i-2];

    printf("%lld", a[n-1]);
    return 0;
}
*/