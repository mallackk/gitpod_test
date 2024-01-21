// 1~9번 난쟁이 중 7명의 합이 100
// 그럼 브루트포스로?
// 아무리봐도 7중 for문은 아님.
// 아홉 난쟁이 중 7명을 뽑는 경우의 수 = 9C2 = 36
#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int main(int argc, const char* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int sum = 0;
    for(int i=0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 9);
    
    for(int i=0; i < 9; i++) {
        for(int j=i+1; j < 9; j++) {
            if(sum - (arr[i] + arr[j]) == 100) {
                 for(int k=0; k < 9; k++) {
                    if(k != i && k != j) { 
                        cout << arr[k] << '\n';
                    }
                }
                return 0;
                // 단 한번의 경우만 출력하면 되기 때문에, 최초로 등장한 경우에만 출력하도록.
            }
        }
    }

    return 0;
}


// return 0 에 대하여
// return은 함수가 종료됐다는 의미로,
// 함수 내의 변수나 어떤 값을 돌려주는 역할을 한다.
// return은 함수가 종료됐다는 의미로 함수 내의 변수나 어떤 값을 돌려주는 역할을 한다.
// 즉, 함수의 반환 값을 전달하는 동시에 현재 수행 중인 함수를 끝낸다.
// return 0; 이후의 코드는 실행되지 않는다.
