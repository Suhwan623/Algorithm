#include <iostream>
#include <algorithm>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, k;
    cin >> a >> k;
    vector<int> v(a);
    for (int i = 0; i<a; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[k - 1];
    return 0;
}