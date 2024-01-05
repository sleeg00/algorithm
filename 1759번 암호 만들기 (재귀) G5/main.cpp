#include <iostream>
#include <stdio.h>
/*
#include <algorithm>
#include <string.h>
using namespace std;

int L, C;
char alpa[20];
int ch[20];
void f(int cnt, int choice, int mo, int ja, char result[20]) {
    if(cnt==L) {
        if(mo>=1 && ja>=2){
            for(int i=0; i<cnt; i++)
                printf("%c", result[i]);
            printf("\n");
        }
    }
    else if(C-choice>=L-(cnt+1)){
        for(int i=choice; i<C; i++) {
            if(ch[i]==0) {

                ch[i] = 1;
                char st[20];
                strcpy(st, result);
                st[cnt] = alpa[i];
                if (alpa[i] == 'a' || alpa[i] == 'e' || alpa[i] == 'i' || alpa[i] == 'o' || alpa[i] == 'u')
                    f(cnt + 1, i, mo + 1, ja, st);
                else
                    f(cnt + 1, i, mo, ja + 1, st);
                ch[i] = 0;
            }
        }
    }
}
int main() {
    scanf("%d %d", &L, &C);

    for(int i=0; i<C; i++) {
        scanf("\n%c", &alpa[i]);
    }

    sort(alpa, alpa+C);  //오름차순
    char result[20];
    f(0, 0,0,0, result);
    return 0;
}
 */