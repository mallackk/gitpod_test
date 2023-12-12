#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    
     ios::sync_with_stdio(false);
    cin.tie(nullptr);

    list<char> L;
    list<char>::iterator cur;
    string str;
    int n;

    cin >> str;
    cin >> n;

    for(int i=0; i<str.size(); i++) {
        L.push_back(str[i]); //at을 써야하는가?
    }

    cur = L.end();

    for(int i=0; i<n; i++) {
        char c;
        cin >> c;
        
        if(c == 'L') {
            if(cur != L.begin())
                cur--;            
        }

        else if(c == 'D') {
            if(cur != L.end())
                cur++;
        }

        else if(c == 'B') {
            if(cur != L.begin()) {
                cur = L.erase(--cur);
            }
        }

        else if(c == 'P') {
            char alphabet;
            cin >> alphabet;
            
            L.insert(cur, alphabet);

        }
    }
   
    //마지막에 출력하는 부분 다시 생각해보자...
    return 0;
}


// cin으로 첫 문자열이랑 숫자 받고
// 첫 문자열로 list 만들어서 숫자만큼 명령어 받도록 for문으로 돌리고
// 다중 if문으로 해결. 명령어 마다 또 if로 받도록 해서.. 