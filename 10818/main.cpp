#include <algorithm>
#include <iostream>

using namespace std;

int N;
//  1 <= N <= 1,000,000
// -1,000,000 <= M <= 1,000,000 (백만)
//
int M;
int main(void) {
   cin >> N;
   int ma=-2147483647;
   int mi=2147483647;
   for(int i=0; i<N; i++) {
       cin >> M;
       ma = max(ma,M);
       mi = min(mi,M);
   }
   cout << mi << " " << ma;
}