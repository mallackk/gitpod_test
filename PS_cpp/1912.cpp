#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int v[100001];
int dp[100001];
int main(void) {
    int n;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> v[i];
    }
    dp[0] = v[0];
    int max_dp = dp[0];

    for(int i=1; i < n; i++) {
        dp[i] = max((dp[i-1] + v[i]), v[i]);
        max_dp = max(max_dp, dp[i]);
    }
    cout << max_dp << "\n";

    return 0;
}

// dp의 용도를 잘 이해하지 못하겠다.
// 10 - 4 = 6 dp[1] = 6 ? 
// 10과 비교하면 10 승.
// 의미가없는데 그럼 max_dp는?
// 그럼 10 - 4 + 3 = 9, dp[2]= 9 / max_dp = 10
// 10 - 4 + 3 + 1 = 10, dp[3]=10
// 10 - 4 + 3 + 1 + 5 = 15, dp[4] = 15 / max_dp = 15
// 10 - 4 + 3 + 1 + 5 + 6 = 21 dp[5] = 21 / max_dp = 21
// ... - 35 = -14 dp[6] = -14 / max_dp = 21
// ...- 35 + 12 는? dp[7] = 12 (어짜피 앞에있는거 더하면 손해.)
// 중요한건 '연속되는 숫자'이다.
// ... - 35 + 12 + 21 -> dp[8] = 33 / max_dp
