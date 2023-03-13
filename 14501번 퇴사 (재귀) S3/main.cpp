#include <iostream>
#include <stdio.h>
using namespace std;
int n,a[1000],b[1000];
int ma=-21;
void f  (int hap, int cnt) {
    if (cnt>=n) {
        if (hap > ma)
            ma = hap;
    }
    else {
        for (int i = cnt; i < n; i++) {

            if(cnt+a[i]>n)
                f(hap, i+a[i]);  //x=일수
            else if(i+a[i]<=n && cnt<=n)
                f(hap + b[i], i+a[i]);
        }
    }
}

int main() {
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    f(0, 0);
    printf("%d\n", ma);
}