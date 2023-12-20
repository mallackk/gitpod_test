#include <iostream>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;

    cin >> n >> k;

    list<int> Y;
    list<int>::iterator iter = Y.begin();
    for(int i=1; i<=n; i++) {
        Y.push_back(i);
    }
    
    cout << "<";

    while(Y.size()) {
        for(int i=0; i < k; i++) {
            if(++iter == Y.end()) {
                iter = Y.begin();
                continue;
            }
            ++iter;
        }
        cout << *iter;
        iter = --Y.erase(iter);

        if(Y.empty())
            cout << ">";
        else
            cout << ", ";
    }
    return 0;
}