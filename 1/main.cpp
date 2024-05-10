#include<iostream>


using namespace std;

int arr[101];
int ma=0;
int check_ma=0;
int main(int argc, char** argv)
{
    int N,cnt=0;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
        ma = max(arr[i],ma);
    }
    for(int i=2; i<=ma; i++) {
        cnt=0;
        for(int j=0; j<N; j++) {
            if(arr[j]%i==0) {
                cnt++;
            }
        }
        if (cnt>check_ma) {
            check_ma = cnt;
        }
    }
    cout << check_ma;
    return 0;
}