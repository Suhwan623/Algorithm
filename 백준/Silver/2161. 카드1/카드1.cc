#include <iostream>
#include <algorithm>
#include <queue>
int main() {
    using namespace std;
    queue<int> q;
    queue<int> q2;
    int n;
    cin >> n; //4
    for (int i=1; i<=n; i++) {
        q.push(i); // 위에서 부터 1234
    }
    while (q.size()>= 1) {
        q2.push(q.front()); // 두번째 큐에 첫번째 큐의 가장 상단의 값을 넣음
        q.pop(); //다음값인 2를 꺼냄

        int front = q.front(); //변수에 큐의 최상단값을 넣음 front는 3
        q.pop(); //3을 꺼냄
        q.push(front); //3을 뒤로 집어넣음
    }
   while (!q2.empty()) {
       cout << q2.front() << " "; //두번째 큐의 최상단 값부터 출력
       q2.pop();
   }
    return 0;
}
