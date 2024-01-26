// 접근을 어떻게 해야할까?
// 마지막에 ( 와 ) 의 값이 맞아야한다? - 이건 틀렸다. 반례:())(()
// 일단 방법은 여러가지일듯.
// 스택으로 접근해야하는 이유?
// ) 가 이전에 ( 이 나온 만큼보다 더 나오면 그건 잘못된 표기법임.
// 아하!
// 그럼 stack의 push를 (로 두고 )를 pop으로.
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int num;
    cin >> num;

    while(num--) {
        stack<char> st;
        string s;
        cin >> s;

        for(int i=0; i < s.length(); i++) {
            if(st.empty()) {
                st.push(s[i]);
            }
            else {
                if(st.top() == '(' && s[i]==')') {
                    st.pop();
                }
                else
                    st.push(s[i]);
            }
        }
    if(st.empty()) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    
    }
    return 0;
}


