// 1~9번 난쟁이 중 7명의 합이 100
// 그럼 브루트포스로?
// 아무리봐도 7중 for문은 아님.
// 아홉 난쟁이 중 7명을 뽑는 경우의 수 = 9C2 = 36
#include <iostream>
#include <algorithm>

using namespace std;

int arr[9];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int sum = 0;
    for(int i=0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + 9);
    
    for(int i=0; i < 8; i++) {
        for(int j=i+1; j < 9; j++) {
            if(sum - (arr[i] + arr[j]) == 100) {
                 for(int k=0; k < 9; k++) {
                    if(k != i && k != j) { 
                        cout << arr[k] << endl;
                }
            }
        }
        }
    }

    return 0;
}