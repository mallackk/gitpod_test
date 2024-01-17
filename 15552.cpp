// 프로그램의 입출력 시간이 수행 시간에 포함됨.
// 입출력은 굉장히 오래 걸린다.
// endl은 \n과 다르게 입력 버퍼를 비운다.
// 그럼 입출력이 많으면 그 시간때문에 초과.
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b;;
    cin >> n;
    for(int i=0; i < n; i++) {
        
        cin >> a >> b;

        cout << a + b << '\n';
    }


    return 0;
}