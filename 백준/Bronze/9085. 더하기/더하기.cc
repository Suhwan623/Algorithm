#include <iostream>
using namespace std;

int main() {
	int t, a;
	int n[100] = { 0 };
	int sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;
		for (int j = 0; j < a; j++) {
			cin >> n[j];
			sum += n[j];
		}
		cout << sum << endl;
		sum = 0;
	}
}