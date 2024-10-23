#include <iostream>
#include <numeric>
using namespace std;
int main() {
    int n, m, cnt = 0;
    int g;
    cin >> n >> m;
    if(n%m==0) {
        cout << cnt;
    }
    else {
       g = m - (gcd(n, m));
        cout << g << endl;
    }
}