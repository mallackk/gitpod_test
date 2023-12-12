#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    
    ios::sync_with_stdio(0);
	cin.tie(0);


    // list<int> L = {3,7};
    // list<int>::iterator cur = L.begin(); // cur는 3을 가리킴.
    // cout<<L.front();









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
        while() //여기서 어케해야하지..
    }


    return 0;
}


// cin으로 첫 문자열이랑 숫자 받고
// 첫 문자열로 list 만들어서 숫자만큼 명령어 받도록 for문으로 돌리고
// 다중 if문으로 해결. 명령어 마다 또 if로 받도록 해서.. 