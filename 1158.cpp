#include <iostream>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    list<int> Y;
    for(int i=1; i <= n; i++) {
        Y.push_back(i);
    }
    list<int>::iterator kill = Y.begin();
   
    cout << "<";

    while(Y.size() > 1) {
        for(int i=0; i < k-1; i++) {
            ++kill;
            if(kill == Y.end()) {
                kill = Y.begin();
        }
    } // 여기까지가 이제 죽일사람 정하는거(이부분을 모르겠다)
        cout << *kill << ", ";

        auto temp = next(kill);   
        if(temp == Y.end()) {
            temp = Y.begin();
        }
        kill = Y.erase(kill);
        if(kill == Y.end()) {
            kill = temp;
        }
        //이제 죽여야지
    }


    cout <<*Y.begin()<< ">"; // 마지막 원소인지를 확인하고 콤마 출력여부 결정.
    return 0;
}

//왜안될까..?
//왜 될까.