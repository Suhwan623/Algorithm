#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return atoi(s.c_str());
}

int main() {
    int a;
    int b;
    cin >> a >> b;

    if (rev(a) > rev(b)) {
        cout << rev(a);
    }
    else if (rev(b) > rev(a)) {
        cout << rev(b);
    }
}
