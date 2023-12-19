#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <stdlib.h>


using namespace std;

 


int main(void) {
    
    int n;
    int k;

    cin >> n >> k;

    list<int> Y;
    list<int>::iterator iter=Y.begin();

    for(int i=0; i < n; i++) {
        Y.push_back(i);
    }

    while(Y.size()!=0;) {
        for(int i=0; i < k-1; i++) {
            ++iter;
            Y.erase(iter);
            --iter;
        }
        if
    }

    


    return 0;
}