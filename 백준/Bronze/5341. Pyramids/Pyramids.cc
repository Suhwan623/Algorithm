#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        int sum = n * (n + 1) / 2; // 4 * 5 / 2 20 / 2는 10
        cout << sum << endl;
    }
    return 0;
}
