#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, P, C;
	cin >> A >> P >> C;
	printf("%d", max(A + C, P));
}
