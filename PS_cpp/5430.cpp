// 만약 vector로 구현한다면
// D, R 구현 가능.
// queue로 구현해도 가능?

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test;
    
    cin >> test;
    while(test--) {
       deque<int> dq;
       string order;
       string str;
       int n;
       cin >> order;
       cin >> n;
       cin >> str;
       string s = "";
       for(int i=0; i < str.length(); i++) {
        if(isdigit(str[i])) {
            s += str[i];
        }
        else {
            if(!s.empty()) {
                dq.push_back(stoi(s));
                s="";
            }
        }
       }
        
    }
    
}

/