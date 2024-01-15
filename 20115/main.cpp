
// 에너지 드링크
// 임의로 서로 다른 두 에너지 드링크를 고른다 -> 임의-> 완전탐색, 그리디
// 에너지 드링크 합치다가 /2 로 흘린다.
// 남은 에너지 드링크는 버린다
// 에너지 드링크가 하나만 남을때 까지 반복.

// 5 -> drink_number
// 3 2 10 9 6 -> drink_amount 드링크양은 최대



/*
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

multiset<double long, greater<double long>> drink_amount_less_order;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long drink_number;
    double long amount;
    double long hap=0;
    cin >> drink_number;

    for (long long i=0; i<drink_number; i++) {
        cin >> amount;
        drink_amount_less_order.insert(amount);
    }
    for(auto itr = drink_amount_less_order.begin(); itr!= drink_amount_less_order.end(); itr++) {
        if (hap==0) {
            hap+=*itr;
        } else {
            hap+=double(*itr/2);
        }
    }
    cout << hap ;
}*/