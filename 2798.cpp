#include <iostream>
#include <algorithm>

using namemspace std;

int main(void) {
    ios:sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int card[100];
    int n, m;
 
    cin >> n >> m;
    for(int i=0; i < n; i++) {
        cin >> card[i]; //100,000을 넘지 않는 양의 정수 조건은?
    }


    return 0;
}


// 고려해야할 점
// 합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우에만
// 입력으로 주어진다는건 조건을 걸어야한다는 것.