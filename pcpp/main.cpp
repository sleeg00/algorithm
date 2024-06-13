/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int ti=1;
int during=1;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int answer = 0;

    int band = bandage[0];
    int recovery = bandage[1];
    int plus_recovery = bandage[2];
    int i=0;
    int max_health=health;

    while(true) {
        if(i>=attacks.size()) {
            answer = health;
            return answer;
        }
        int attack_time = attacks[i][0];
        int attack_damage = attacks[i][1];
        if(ti == attack_time) {
            health -=attack_damage;
            during=1;
            i++;
        } else {
            if(during == band) {
                if(health + recovery + plus_recovery <max_health) {
                    health += recovery+plus_recovery;
                    during=1;
                } else if(health + recovery + plus_recovery >=max_health){
                    health=max_health;
                    during=1;
                }
            } else {
                if(health+recovery < max_health) {
                    health+=recovery;
                }else if(health + recovery + plus_recovery >=max_health){
                    health=max_health;
                }
                during++;
            }

        }

        if(health<=0) {
            return -1;
        }

        ti++;
    }
    return answer;
}
 */