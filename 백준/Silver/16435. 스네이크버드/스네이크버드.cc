#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n; i++) {
        if (m >= v[i]) {
            m++;
        }
        else break;
    }
    cout << m << endl;
}