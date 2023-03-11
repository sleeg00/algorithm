#include <stdio.h>

int main() {
    int a[12];
    int n, b[100];
    a[0]=1;
    a[1]=2;
    a[2]=4;

    for(int i=3; i<=10; i++) {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d\n", a[b[i]-1]);
    }
}