#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;

        int maxPrice = 0;
        string maxPlayer;

        for (int j = 0; j < p; ++j) {
            int price;
            string player;
            cin >> price >> player;
            if (price > maxPrice) {
                maxPrice = price;
                maxPlayer = player;
            }
        }

        cout << maxPlayer << endl;
    }

    return 0;
}
