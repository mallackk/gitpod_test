#include <iostream>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;

    cin >> n >> k;

    list<int> Y;
    list<int>::iterator kill = Y.begin();

    for(int i=1; i <= n; i++) {
        Y.push_back(i);
    }
    cout << "<";

    while(Y.size()) {
        for(int i=0; i < k-1; i++) {
            if(kill == Y.end()) {
                kill = Y.begin();
                continue;
            }
            ++kill;
        } // 여기까지가 이제 죽일사람 정하는거
        if(Y.size() == 1)
            cout << *kill;
        else
            cout << *kill << ", ";
    
        kill = Y.erase(kill);
        if(kill == Y.end()) {
            kill = Y.begin();
        }
        //이제 죽여야지
    }


    cout << ">";
    return 0;
}

//왜안될까..?