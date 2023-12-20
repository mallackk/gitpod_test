#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int k;

    cin >> n >> k;

    list<int> Y;
    list<int>::iterator iter=Y.begin();

    for(int i=1; i <= n; i++) {
        Y.push_back(i);
    }

    cout<< "<";

    //이건 그냥 Y.size()와 같다
    while(Y.size()) {
        for(int i=0; i < k-1; i++) {
            if(++iter == Y.end()) { // ++는 이렇게 하는거구나.....
                iter = Y.begin();
                continue;
            }
            ++iter;
        }
        //만약 N이 1이라면?
        if(Y.size() == 1) 
            cout << *iter;
        else
            cout << *iter << ", ";
        
        iter = Y.erase(iter);
        if(iter== Y.end()) {
            iter = Y.begin();
        }
    }
    cout << ">";
    return 0;
}