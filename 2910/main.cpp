/*
#include <stdio.h>

#include <vector>

#include <algorithm>
#include <map>

using namespace std;

map <int, int> r;

bool cmp(const pair<long, long> &a, const pair<long, long> &b) {
    if(a.second == b.second) {
        return r[a.first] < r[b.first];
    }
    return a.second > b.second;
}

int main() {
    long N,M;
    long number;
    map<long, long> map;
    scanf("%ld %ld", &N, &M);



    for(long i=0; i<N; i++) {
        scanf("%ld", &number);
        map[number]++;
        if (r[number]==0) {
            r[number] =i+1;
       }
    }

    vector<pair<long,long>> vec(map.begin(), map.end());
    sort(vec.begin(),vec.end(), cmp);

    for (auto it = vec.begin(); it!=vec.end(); it++) {
        for (long j=0; j<it->second; j++) {
            printf("%ld ", it->first);
        }
    }
    return 0;
}
 */