// 조건: 나이 순, 가입 순
// 그럼 tuple을 쓰는 경우가 있고
// pair와 조건 하나를 더 붙이는 경우가 있다.
// sort()에 대하여 공부해보자.

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Person {
    int age;
    string name;
};

bool compare (pair<int, string> p1, pair<int, string> p2) {
    return p1.first < p2.first;
}
// 대체뭐지

int main(void) {
    int n;
    cin >> n;

    pair<int, string> p;
    vector<pair<int, string>> v;
    for(int i=0; i < n; i++) {
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    stable_sort(v.begin(), v.end(), compare);
    for(int i=0; i < n; i++) {
        cout << v[i].first << ' ' << 
    }

    return 0;
}