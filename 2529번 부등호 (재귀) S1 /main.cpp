#include <iostream>
/*
#include <stdio.h>
#include <cmath>
using namespace std;

int n;
char c[11];
int v[11];
u_long ma=9999999999999.0,mi=0.0;
void f(int x, u_long hap, int cnt) {

    if(cnt==n+1) {
        if(ma>hap)
            ma=hap;
        if(mi<hap)
            mi=hap;
    }
    else {
        for(int i=9; i>=0; i--) {

            if (cnt == 0) {
                v[i] = 1;
                f(i, hap + pow(10, n - cnt) * i, cnt + 1);
                v[i] = 0;
            }
            else if(cnt!=0) {

                if (c[cnt] == '>' && x > i && v[i] == 0) {
                    // printf("%d %lf %d\n", x, hap, cnt);
                    v[i] = 1;
                    f(i, hap + pow(10, n - cnt ) * i, cnt + 1);
                    v[i] = 0;
                } else if (c[cnt] == '<' && x < i && v[i] == 0) {
                    //printf("%d %lf %d\n", x, hap, cnt);
                    v[i] = 1;
                    f(i, hap + pow(10, n - cnt ) * i, cnt + 1);
                    v[i] = 0;
                }
            }

        }

    }
}
int main() {
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        cin >> c[i];
    f(0,0.0,0);

    u_long k = pow(10,n);
    if(mi<k)
        for(int i=0; i<(k-mi)/k+1; i++)
            printf("0");
    printf("%lld\n", mi);
    if(ma<k)
        for(int i=0; i<(k-ma)/k+1; i++)
            printf("0");
    printf("%lld", ma);
}
 */