#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int num[5];
        for (int j = 0; j < 5; j++) {
            cin >> num[j];
        }
        sort(num, num + 5);
        int count = num[1] + num[2] + num[3];
        if (num[3] - num[1] >= 4) {
            cout << "KIN" << endl;
        }
        else cout << count << endl;
    }
    return 0;
}
