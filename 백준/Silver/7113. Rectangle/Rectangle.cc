#include <iostream>
using namespace std;

int countSquare(int n, int m) {
    int count = 0;
    while (n > 0 && m > 0) {
        if (n < m) swap(n, m); // 단순하게 계산하기 위해서 n이 항상 m보다 크도록 하기
        count += n / m;        // 자를 수 있는 정사각형 수
        n = n % m;             // 남은 직사각형
    }
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        cout << countSquare(n, m) << '\n';
    }
    return 0;
}
