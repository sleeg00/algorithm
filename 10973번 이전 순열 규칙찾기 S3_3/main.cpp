#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int n,a[100001];
int check,ma=9999999999;
int im,change;
vector<int> v;
int main() {
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);

    for(int i=n; i>=1; i--) {
        if(a[i]<a[i-1]) {
            check=i-1;
            break;
        }
    }
    if(check==0)
    {
        printf("-1");
        return 0;
    }
    for(int i=check+1; i<=n; i++) {

        if(a[check]-a[i]>0 && a[check]-a[i]<ma) {
            im=i;
            ma = a[check] - a[i];

        }
    }

    change=a[check];
    a[check]=a[im];
    a[im]=change;

    for(int i=check+1; i<=n; i++)
        v.push_back(a[i]);
    sort(v.begin(), v.end(),greater<int>());

    for(int i=1; i<=check; i++) {
        printf("%d ", a[i]);
    }
    for(int i=0; i<v.size(); i++) {
        printf("%d ", v[i]);
    }
}