#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;  // 테스트 케이스 개수
    cin >> T; 
	for (int t = 0; t < T; t++) { // 0부터 테스트 케이스 개수까지 for
		int N; // 대학개수
        cin >> N;

		string ans; // 술을 가장 많이 먹은 대학
		int max = -1; // 술의 최대 소비

		for (int n = 0; n < N; n++) {
			string s; //대학교 이름
            int x; // 술 소비량
            cin >> s >> x;
			if (x > max) { // 최대 술 소비량 보다 술 소비량이 많으면
				max = x; // 최대 술 소비량 변수값을 x로
				ans = s; // 술을 가장 많이 먹은 대학을 s로
			}
		}
		cout << ans << '\n';
	}
}