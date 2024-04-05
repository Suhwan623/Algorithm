#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int num, cnt = 0;
	int check[3] = { 0,1,2 }; // 영학이가 우유를 마시는 규칙 
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == check[sum]) { //num이 check 배열의 sum 인덱스 값과 일치한지 확인
			cnt++;
			sum++;
			if (sum == 3) sum = 0;
		}
	}
	cout << cnt;

	return 0;
}