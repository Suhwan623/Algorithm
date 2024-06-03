#include <iostream>
#include <set>
using namespace std;

int main() {
	int k, p, m;
	int a;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> p >> m;
		set<int> oc;
		int sum = 0;

		for (int j = 0; j < p; j++) {
			cin >> a;
			if (oc.find(a) != oc.end()) {
				//set 함수는 집합에 값이 존재하지 않을때 end를 반환 != 연산자를 해줌으로써 집합에 a가 존재할때 검증을 의미함
				sum++;
			}
			else {
				oc.insert(a);
				//새로운 좌석이면 a를 집합에 추가
			}
		}
		cout << sum << endl;
	}
}
