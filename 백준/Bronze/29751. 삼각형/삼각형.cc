#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double w;
	double h;
	cin >> w >> h;
	double  sum = 0;
	sum = (w * h) / 2;
	cout << fixed;
	cout.precision(1);
	cout << sum;
}
