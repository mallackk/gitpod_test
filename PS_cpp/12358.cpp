// 좀더 깔쌈하게 풀순없을까
// 예를 들면 변수를 많이 지정하지말고
// 문자열로 인식해서 한번에처리하게...
#include <iostream>
#include <algorithm>
using namespace std;


int main(int argc, const char* argv[]) {
    long num;
    long result =0;
    int p = 0;
    
    cin >> num;
    
    long N = num;
    while(N > 0) {
        N /= 10;
        p += 1;
    }
    int digit = p * 9;

    for(long i=num-digit; i < num; i++) {
        long sum = i;
        long n = i;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        if(sum == num) {
            result = i;
            break;
        }
    }
   
    cout << result << endl;
    return 0;
}