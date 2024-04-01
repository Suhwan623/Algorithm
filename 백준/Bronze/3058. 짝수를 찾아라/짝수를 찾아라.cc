#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int min = 100;
		int sum = 0;
		int n[7] = { 0 };
		for (int j = 0; j < 7; j++) {
			cin >> n[j];
			if (n[j] % 2 == 0) {
				sum += n[j];
				if (n[j] < min)
					min = n[j];
			}
		}
		cout << sum << endl << min << endl;
	}
	return 0;
}