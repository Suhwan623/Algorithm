#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int p;
		cin >> p >> s;

		for (int i = 0; i < s.length(); i++) {
			if (i != p - 1) { //i의 0번째 방 부터 문자열의 길이까지 탐색
				cout << s[i]; //만약 i와 p-1이 같지않으면 출력
			} //ex p가 4이고 star이라는 문자열이 주어지면 i가 4일때 4-1인 3과 같지 않으므로 4번째 방을빼고 모두 출력한 sta가 출력됨
		}
		cout << "\n";
	}
}
