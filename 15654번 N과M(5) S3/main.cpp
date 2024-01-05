#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
/*
using  namespace  std;
int n,m;
int s[100000];
int a[1000000];
int ch[10000];
void f(int x) {
    if(x==m) {
        for(int i=0; i<m; i++) {
           cout << s[a[i]-1] << " ";
        }
        printf("\n");
    }
    else {
        for(int i=1; i<=n; i++) {

            if(ch[i]==0) {
                ch[i]=1;
                a[x] = i;
                f(x + 1);
                ch[i]=0;
            }

        }
    }
}

int main() {

    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++) {
      cin >> s[i];
    }


    sort(s, s+n);

    if(m==1){
        for(int i=0; i<n; i++) {
            cout << s[i] <<"\n";
        }
        return 0;
    }
    f(0);
}
 */