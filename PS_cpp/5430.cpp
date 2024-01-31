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
        string s;
        int n;
        cin >> s;
        cin >> n;
        int arr[n];

        cout << "[";
        for(int i=0; i < n; i++) {
            cin >> arr[i];
            cout << ",";
        }
        cout << "]" << "\n";

        deque<int> dq;

        for(auto c : s) {
            if(c == 'R')
        }
    }    

    
}