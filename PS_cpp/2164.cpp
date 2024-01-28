// 카드 N장을 반은 버리고 반은 덱 아래로 집어넣는다.
// N이 짝수일때
// N/2번 시행하면 남는 카드는 N/2장. -> 전부 짝수.
// N이 홀수일때
// (N+1)/2번 시행하면 남는 카드는 (N-1)/2 장. -> 전부 짝수.
// 한 cycle 돌면 남는건 짝수 오름차순 정렬.
// 한 cycle 더 돌면 남는건 4의 배수 오름차순 정렬.
// 예 ) 6 -> 4, 8 -> 8, 12 -> 8, 16 -> 16.

// 그냥 queue로 생각하면 편하다...
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    queue<int> q;

    for(int i=1; i <= n; i++) {
        q.push(i);
    } // 카드 덱 생성

    while(q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front() << "\n";

    return 0;
}