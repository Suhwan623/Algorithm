#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> v(a);
    for(int i=0; i<a; i++) {
        cin >> v[i];
    }
    int allGcd = v[0];

    for(int i=0; i<a; i++) {
        allGcd = gcd(allGcd, v[i]);
    }

    for(int i=1; i<=allGcd; i++) {
        if(allGcd % i == 0) {
            cout << i << endl;
        }
    }
}