#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	long long e = stoll(a + b);
	long long f = stoll(c + d);
	cout << e + f << endl;
}