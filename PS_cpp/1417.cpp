#include <iostream>
#include <algorithm>

using namespace std;

int vote[5000];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int dasom;
    int cnt = 0;

    cin >> n;
    cin >> dasom;

    for(int i=0; i < n-1; i++) {
        cin >> vote[i];
    }
    
    while(true) {
        // 가장 큰 녀석한테서 더 커질떄까지(똑같아도 안됨)하나씩 뺏어온다.
        int find_max = 0;
        int index = 0;
        for(int i=0; i < n-1; i++) {
            if(find_max < vote[i]) {
                find_max = vote[i];
                index = i;
            }
        }   
        if(find_max < dasom) {
            break;
        }
        dasom++;
        vote[index]--;
        cnt++;
    }
    cout << cnt;

    return 0;
}


// 흠.
// 먼저 변수 설정하고
// for 문 써서 입력받고
// 그다음이 문제다. 비교? 해야하나? 하나하나?
// 그런 자료구조가 있었던가?
// 정렬? 정렬인가? 그게 답인가?
// 큐 일수도...
// 우선순위 큐 ? 라는게 뭐지...
// 일단 제일 큰 걸 먼저 먹어야한다.
// 그다음 차례대로 그다음 큰 녀석을 먹고,
// 동률이 있다면 빠른 기호 먼저 먹는다고 하자.
// 미구현 목록: while 조건, 배열 중 제일 큰 놈 찾는 법.
// while 조건은 뭔가 가장 큰놈이 vote[0]이면 될거같은데.
// for로 가장 큰 놈 찾는건 어케하지...
// 처음 짠 코드는 다솜이의 표가 적을때, 많을때, 같을때 다 구분했다.
// 시간초과가 떴다. 이유는 아마 while문 안에서 계속 도니까 그런 것 같다.
// 그럼 그냥 많을때와 그 외로 나눌까?
// 시간 초과가 뜨는 이유를 명확히 알고싶다.