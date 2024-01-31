// 그냥 배열은 좀 어려울듯
// 왜냐? 왔다갔다 해야하는데 그게 시간복잡도가 안될거같다
// 링크드리스트 아니면...
// 큐로 생각한다면 3,6,2,7,5,1,4
// 저번에 풀었던 9012와 엇비슷하다.
#include <iostream>
#include <queue>
#include <algorithm>


using namespace std;


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    queue<int> y;

    for(int i=1; i <= n; i++) y.push(i);

    cout << "<";

    /*while(y.size() != 1) {
        int cnt = 0;
        cnt++;
        if(cnt % k == 0) {
            cout << y.front() << ", ";
        }
        else
            y.push(y.front());
        y.pop();
    }*/

    // 이렇게 하면 시간초과가 뜨는 이유는?

    while(y.size() != 1) {
        for(int i=1; i < k; i++) {
            y.push(y.front());
            y.pop();
        }
        cout << y.front() << ", ";
        y.pop();
    }

    cout << y.front() << ">" << "\n";
    return 0; 
}
