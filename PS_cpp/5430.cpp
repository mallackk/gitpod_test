// 만약 vector로 구현한다면
// D, R 구현 가능.
// queue로 구현해도 가능?

#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // bool reverse = false, error = false;
    // 이게 여기 들어가면안되는 이유가 뭐지...
    int test, n;
    cin >> test;
    while(test--) {
       deque<int> dq;
       string order;
       bool reverse = false;
       bool error = false;
       string str;
       cin >> order;
       cin >> n; 
       cin >> str; 
    //    for(int i=0; i < str.length(); i++) {
    //     if(isdigit(str[i]) != 0) {
    //         dq.push_back(stoi(str[i]));
    //     }
    //    }
    /* 이러면 안되는 이유는?
        [100, 99] 처럼 숫자가 한자리가 아닐 수도 있다.
        그렇게 되면 저건 완전히 오류다. */ 
        string tmp="";
        for(int i=0; i < str.length(); i++) {
            if(isdigit(str[i])) {
                tmp += str[i];
            }
            else {
                if(!tmp.empty()) {
                    dq.push_back(stoi(tmp));
                    tmp ="";
                }
            }
        }
    //  for(int i=0; i < order.length(); i++)대신 auto를 쓰자!
        for(auto o : order) {
            if(o == 'R') {
            reverse = !reverse;
            }
            if(o =='D') {
                if(dq.empty()) {
                    cout << "error" << "\n";
                    error = true;
                    break;
                }
                else if(!reverse) {
                    dq.pop_front();
                }
                else
                    dq.pop_back();
                }
            }

            if(!error) {
                cout << "[";
            if(!reverse) {
                for(auto o = dq.begin(); o != dq.end(); o++) {
                    if(o == dq.end() -1) {
                        cout << *o;
                    }
                    else
                        cout << *o << ", ";
                }
            }
            else {
                for(auto o = dq.rbegin(); o != dq.rend(); o++) {
                    if(o == dq.rend() -1) {
                        cout << *o;
                    }
                    else
                        cout << *o << ", ";
                }
            }

            cout << "]\n";
            }
              
    }  
    return 0;         
}
 

