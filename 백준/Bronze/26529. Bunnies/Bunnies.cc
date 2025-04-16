#include <iostream>

using namespace std;
int main() {
   int  dp[46]; //입력값 범위가 45기 때문에 dp배열을 46으로 설정
   dp[0] = dp[1] = 1; //점화식을 세우기 전 dp초기값을 설정
   for(int i=2; i<46; i++) { //점화식을 사용할 수 있는 인덱스가 2이기 때문에 2부터 45까지 반복
      dp[i] = dp[i-1] + dp[i-2]; //문제에 나와있는  F(N) = F(N-1)+F(N-2) 활용
   }
   int t; //테스트 케이스 수
   cin >> t; //입력받음
   while(t--) { //테스트 케이스 수만큼 반복
      int x; //출력할 x 선언
      cin >> x; //입력받음
      cout << dp[x] << endl; //점화식을 이용해 풀이
   }
}