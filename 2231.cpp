// N이 주어지면 N을 어떻게 자릿수대로 쪼갤것인가?
// N을 숫자대로 배열로?
// 아니면 N을 받을 때 아예 다르게받아야하나? -> 불가능.
// 분해합 = XYZ (100+1)X + (10+1)Y + (1+1)Z
// 분해합을 주고 생성자를 찾는문제니까 반대로 생각해보자.
// 216 = 101X + 11Y + 2Z 와 부정방정식?
// 분해합 - 각자리수 = 생성자.
// 아니 풀이는 뭐 그래.. 1부터 N까지 다 해보면되지. 그래 맞아.

// 숫자의 자릿수 구하기 -> 나머지를 이용한다. (정수인 경우)
// 왜 이생각을 못했지 ? ㅅ시발
// 그리고 sprintf라는 것도 있다더라. 찾아보고 노션에 기록하자
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    int num;
    cin >> num;

    while(true) {
        for(int i=; i < num; i++) {
        }
    }
    return 0;
}