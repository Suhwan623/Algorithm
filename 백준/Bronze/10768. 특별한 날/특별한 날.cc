#include <iostream>

int main () {
    using namespace  std;
    int m, d;
    cin >> m;
    cin >> d;
    if (m == 2 && d == 18) {
        cout << "Special";
    }
    else if (m < 2 || (m == 2 && d < 18)) cout << "Before";
    else cout << "After";
    return 0;
}