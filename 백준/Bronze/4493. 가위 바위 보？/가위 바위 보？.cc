#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, n;
    char p1, p2;
    string a = "Player 1";
    string b = "Player 2";

    cin >> t;
    for (int i = 0; i < t; i++) {
        int s1 = 0, s2 = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> p1 >> p2;
            if (p1 == p2)
                continue;
            else if ((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R'))
                s1 += 1;
            else
                s2 += 1;
        }
        if (s1 > s2)
            cout << a << endl;
        else if (s2 > s1)
            cout << b << endl;
        else
            cout << "TIE" << endl;
    }
    return 0;
}
