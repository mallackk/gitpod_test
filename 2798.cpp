#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int card[101];
    int n, m, ans;
 
    cin >> n >> m;
    for(int i=0; i < n; i++) {
        cin >> card[i]; //100,000을 넘지 않는 양의 정수 조건은?
    }

    for(int i=0; i < n; i++) {
        for(int j=i+1; j < n; j++) {
            for(int k=j+1; k < n; k++) {
                int tmp = card[i] + card[j] + card[k];
                if(tmp <= m)
                    ans = max(ans, tmp);                    
            }
        }
    }
    cout << ans << '\n';
    return 0;
}


// 고려해야할 점
// 합이 M을 넘지 않는 카드 3장을 찾을 수 있는 경우에만
// 입력으로 주어진다는건 조건을 걸어야한다는 것.
// n개의 카드 중에서 m과 가장 가까운 세장의 합을 만드는 것...
// for문 다시 공부해보자...