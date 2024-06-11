/*
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int arr[100][100];
int count[100];
int visit[101][101];
int solution(vector<string> friends, vector<string> gifts) {
    int answer = 0;
    vector<pair<pair<string,int>, pair<int,int>>> v;
    for(int i=0; i<friends.size(); i++) {
        v.push_back({{friends[i], 0}, {0,0}});
    }
    vector<string> member;
    for(int i=0; i<gifts.size(); i++) {
        string input = gifts[i];
        stringstream ss(input);

        string word;
        while(getline(ss, word, ' ')) {
            member.push_back(word);
        }
    }

    int i=0;
    while(i<member.size()) {
        string start = member[i];
        string end = member[i+1];
        for(int j=0; j<friends.size(); j++) {
            for(int k=0; k<friends.size(); k++) {
                if(start==friends[j]) {
                    if(end==friends[k]) {
                        arr[j][k]++;
                    }
                }
            }
        }
        for(int j=0; j<v.size(); j++) {
            if(v[j].first.first==start) {
                v[j].first.second++;
            } else if(v[j].first.first==end) {
                v[j].second.first++;
            }
        }
        i+=2;
    }
    for(int i=0; i<v.size(); i++) {
        v[i].second.second = v[i].first.second- v[i].second.first ;

    }



    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v.size(); j++) {

            if(arr[i][j]!=0 && i!=j && visit[i][j]==0) {
                if(arr[i][j] > arr[j][i]) {
                    visit[i][j]=1;
                    visit[j][i]=1;
                    count[i]++;
                } else if(arr[i][j] < arr[j][i]) {
                    count[j]++;
                    visit[i][j]=1;
                    visit[j][i]=1;
                }
            }
            if(i!=j && visit[i][j]==0) {
                if(arr[i][j]==arr[j][i]) {
                    if(v[i].second.second>v[j].second.second) {
                        visit[i][j]=1;
                        visit[j][i]=1;
                        count[i]++;
                    } else if(v[i].second.second < v[j].second.second) {
                        visit[i][j]=1;
                        visit[j][i]=1;
                        count[j]++;
                    }

                }
            }
        }
    }
    int ma=-2147483647;
    for(int i=0; i<friends.size(); i++) {
        ma =  max(ma,count[i]);
    }
    answer=ma;
    return answer;
}
*/