#include <stdio.h>
int n,m;
int a[100];
int ch[100];
void f(int x) {


    if(x==m) {
        for(int i=0; i<m; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    else {
        for (int i = 1; i <= n; i++) {
            if(i>=a[x-1] || ch[i]==0 && x==0) {
                a[x] = i;
                f(x + 1);
            }


        }
    }
}
int main() {

    scanf("%d %d", &n, &m);

    if(m==1) {
        for(int i=1; i<=n; i++)
            printf("%d\n", i);
        return 0;
    }
    f(0);


}
