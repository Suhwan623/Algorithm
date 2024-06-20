#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B && B == C) {
        cout << "*";
    } else if (A == B && B != C) {
        cout << "C";
    } else if (A != B && B == C) {
        cout << "A";
    } else if (A == C && B != A) {
        cout << "B";
    }

    return 0;
}
