#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int reverse(int x) {
    int rev = 0;
    while (x>0) {
        rev = rev * 10 + x % 10; // 첫번째 : rev는 0 + 2여서 2가됨        // 두번째 : rev는 20 + 7여서 27이됨
        x /= 10; // 첫번째 : x는  7 로 바뀜 // 두번째 : x가 7일때 나눈 몫은 0임 x는 0이여서 반복문 종료
    }
    return rev;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> g;
    for (int i = 1; i<=m; i++) {
        g.push_back(reverse(n*i)); // n이 8이면 8부터 m보다 작거나 같을때 까지 반복 후 숫자를 뒤집어서 백터에 저장
    }
    sort(g.begin(), g.end()); // 정렬
    cout << g.back() << endl; // 가장 큰 수를 출력
}
