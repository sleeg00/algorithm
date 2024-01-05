#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n, m;
    unordered_map<string, int> hash;
    unordered_map<int, string> hash2;
    string input;
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> n >> m;
    for (int i=0; i<n; i++) {
       cin >> input;
       hash.insert({input,i+1});
       hash2.insert({i+1, input});

    }
    for (int i=0; i<m; i++) {
        cin >> input;
        if (input[0] >= 65 && input[0] <= 90) {
            cout << hash[input] <<"\n";
        } else {
            cout << hash2[stoi(input)] <<"\n";
        }
    }
    return 0;
}