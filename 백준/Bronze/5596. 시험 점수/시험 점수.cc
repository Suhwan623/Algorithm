#include <iostream>

int main() {
    using namespace std;
    int S = 0;
    int T = 0;
    int info, m, s, e;
    cin >> info >> m >> s >> e;
    S = info + m + s + e;

    cin >> info >> m >> s >> e;
    T = info + m + s + e;
    if (S == T)
        cout << S;
    else if (S < T)
        cout << T;
    else if (S > T)
        cout << S;
}