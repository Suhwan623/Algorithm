#include <iostream>
using namespace std;

int count_zero(int n) {
    int cnt = 0;
    if (n == 0) {
        return 1;
    }
    while (n) {
        if (n % 10 == 0) {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n, cnt = 0;
        cin >> m >> n;
        for (int i = m; i <= n; i++) {
            cnt += count_zero(i);
        }
        cout << cnt << endl;
    }
}
