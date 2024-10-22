#include <iostream>
using namespace std;
int main() {
    int n, f;
    cin >> n;
    cin >> f;

    n /= 100;
    n *= 100;
    for(int i=0; i<100; i++) {
        if(n % f == 0)
            break;
        n++;
    }
    n %= 100;
    if(n<10)
        cout << 0 << n;
    else
        cout << n;
}
