#include <iostream>
using namespace std;

int dp[15][15]; // 입력범위가 14기 때문에 크기 15인 배열

// 위층을 계산하기 위해선 0층의 값을 초기화
void set() {
    // 0층은 i호에 i명 거주
    for (int i = 1; i <= 14; i++) {
        dp[0][i] = i;
    }

    // 1층부터 14층까지 DP 배열 채우기
    for (int k = 1; k <= 14; k++) {
        for (int n = 1; n <= 14; n++) {
            dp[k][n] = dp[k][n - 1] + dp[k - 1][n];
            // 같은 층의 왼쪽 호까지 총 인원수 dp[k][n-1]
            // 바로 아래층의 같은 호 인원수 dp[k-1][n-1]
            // k층 n호까지의 사람수 dp[k][n]
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); //시간 단축을 위한 콛,

    int T; // 테스트 케이스 수
    cin >> T;

    set(); // DP 배열을 초기화

    while (T--) {
        int k, n;
        cin >> k >> n;

        cout << dp[k][n] << '\n';
    }

    return 0;
}
