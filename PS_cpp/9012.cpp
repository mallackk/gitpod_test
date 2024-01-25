// 접근을 어떻게 해야할까?
// 마지막에 ( 와 ) 의 값이 맞아야한다?
// 일단 방법은 여러가지일듯.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    while(num--) {
        string input;
        cin >> input;
        // int L = 0, R = 0;
        // for(int i = 0; i < input.length(); i++) {
        //     if(input[i] == '(')
        //         L += 1;
        //     else
        //         R += 1;
        // 왜 틀린건데.
        }
        
        if(L == R) 
            cout << "YES" <<"\n";
        else 
            cout << "NO" << "\n";
    }
    
    return 0;
}
