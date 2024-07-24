/*
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> targets) {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int answer = 0;

    int ma=0;
    int mi=2147483647;
    int cnt=0;

    sort(targets.begin(), targets.end());
    for(int i=0; i<targets.size(); i++) {
        int x = targets[i][0];
        int y = targets[i][1];

        if(x >= mi) {
            cnt++;
            ma=0;
            mi=2147483647;
        }
        if( i==targets.size()-1) {
            cnt++;
        }
        ma = max(x, ma);
        mi = min(y, mi);

    }
    answer = cnt;
    return answer;
}
 */
// [PCCE 기출] 10번/ 데이터분석
/*
 * #include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int sort_align;
bool comp(vector<int> v, vector<int> v1) {
    return v[sort_align] < v1[sort_align];
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    int number;
    if (ext =="code") {
        number=0;
    } else if(ext=="date") {
        number =1;
    } else if(ext=="maximum") {
        number = 2;
    } else if(ext=="remain") {
        number = 3;
    }
    if(sort_by == "code") {
        sort_align = 0;
    } else if(sort_by == "date") {
        sort_align = 1;
    } else if(sort_by=="maximum") {
        sort_align = 2;
    } else {
        sort_align = 3;
    }
    vector<vector<int>> answer;
    for(int i=0; i<data.size(); i++) {
        if(data[i][number]<val_ext) {
            answer.push_back(data[i]);
        }
    }
    sort(answer.begin(), answer.end(), comp);
    return answer;
}
 */
/*
 * #include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> split(string input, string delimiter){
	vector<string> ret;
    long long pos = 0;
    string token = "";
  	while((pos = input.find(delimiter)) != string::npos){ // string::npos는 \0
    	token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    ret.push_back(input);
    return ret;
}
vector<string> make_string (int y, int m, int d) {

    vector<string> str;
    string s="";
    str.push_back(to_string(y));
    if(m<10) {
        s=("0"+to_string(m));
        str.push_back(s);
    } else if(m>=10){
         str.push_back(to_string(m));
    }
    if(d<10) {
        s=("0"+to_string(d));
        str.push_back(s);
    }else if(d>=10){
         str.push_back(to_string(d));
    }
    return str;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    // today 오늘 날짜 (체크할 날짜)
    // terms 유효기간 배열
    // privacies 번호, 개인정보 수집일자, 약관 종류
        vector<int> answer;
    vector<string> today_string = split(today, ".");
    for(int i=0; i<privacies.size(); i++) {
        vector<string> str = split(privacies[i], " "); // ["2021.05.02", "A"]
        vector<string> day = split(str[0], "."); // ["2021", "05", "02"]
        int y = stoi(day[0]);
        int m = stoi(day[1]);
        int d = stoi(day[2]);
        if(d-1==0) {
            d=28;
            if(m-1==0) {
                m=12;
                y--;
            } else {
                m--;
            }
        } else {
            d--;
        }
        day = make_string(y,m,d);

        for(int j=0; j<terms.size(); j++) {
            vector<string> t = split(terms[j], " ");
            if(t[0]==str[1]) {
                int k = m + stoi(t[1]);
                int mock = k/12;
                int nmg = k%12;
                int _year = y+mock;
                if(_year>stoi(today_string[0])) {
                    break;
                } else if(_year==stoi(today_string[0])) {
                    if(nmg>stoi(today_string[1])) {
                        break;
                    }else if(nmg==stoi(today_string[1])) {
                        if(d>=stoi(today_string[2])) {
                            break;
                        }
                    }
                }
                answer.push_back(i+1);
                break;
            }
        }
    }

    return answer;
}
 */
/*
 * #include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <string.h>
using namespace std;

set<string> se;
bool compare(string p, string q) {
    return p.length() < q.length();
}
vector<string> split(string input, string delimiter, int plus) {
    vector<string> ret;
    string str ="";
    long long pos = 0;
   while ((pos = input.find(delimiter)) != string::npos){
        str = input.substr(0, pos);
        ret.push_back(str);
        input.erase(0,pos+delimiter.length()+plus);
    }
    ret.push_back(input);
    return ret;
}
vector<int> solution(string s) {
    vector<int> answer;
    string str="";
    for(int i=2; i<s.length()-1; i++) {
        str+=s[i];
    }
    vector<string> data = split(str, "}", 2);
    sort(data.begin(), data.end(), compare);

    for(int i=1; i<data.size(); i++) {
       vector<string> split_com = split(data[i], ",", 0);
        for(int j=0; j<split_com.size(); j++) {
            if(se.find(split_com[j])==se.end()) {
                se.insert(split_com[j]);
                int number = stoi(split_com[j]);
                answer.push_back(number);
            }
        }
    }
    return answer;
}
 */
/*
 * #include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int arr[4][4];
int mv[8][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}, {1,1}, {-1,-1}, {1,-1}, {-1,1}};
int visit[4][4];
int search(int x, int y, int cnt, int dir) {


    if (cnt == 3) {
        return 1;
    }

    for (int i = 0; i < 8; i++) {
        int dx = x + mv[i][0];
        int dy = y + mv[i][1];

        if (dx >= 0 && dy >= 0 && dx < 3 && dy < 3) {
            if (dir == -1 || dir == i) {
                if (visit[dx][dy] == 0 && arr[dx][dy] == arr[x][y]) {
                    visit[dx][dy] = 1;
                    if (search(dx, dy, cnt + 1, i) == 1) {
                        return 1;
                    }
                    visit[dx][dy] = 0;
                }
            }
        }
    }

    return 0;
}

int solution(vector<string> board) {
    int answer = 1;
    int first=0,second=0;
    for(int i=0; i<board.size(); i++) {
        for(int j=0; j<board[i].length(); j++) {
            if(board[i][j]=='O') {
                arr[i][j] = 0;
                first++;
            } else if(board[i][j]=='X') {
                arr[i][j]=1;
                second++;
            } else {
                arr[i][j] = -1;
            }
        }
    }
    if(first<second) {
        return 0;
    }
    if(first==0 && second==0) {
        return 1;
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j]!=-1) {
                visit[i][j]=1;
                if(search(i,j,1,-1)==1) {
                    if(arr[i][j]==0) {
                        if(first!=second+1) return 0;
                    } else if(arr[i][j]==1) {
                        if(first!=second) return 0;
                    }
                }
                visit[i][j]=0;
            }
        }
    }

    if(first-1>second) {
        return 0;
    }
    return answer;
}
 */