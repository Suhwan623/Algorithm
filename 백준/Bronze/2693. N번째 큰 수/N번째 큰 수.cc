#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(10);
    while(n--) {
        for(int i=0; i<10; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v[2] << endl;
    }
    return 0;
}
