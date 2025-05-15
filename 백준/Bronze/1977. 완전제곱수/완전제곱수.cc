#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    vector<int> result;
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = n; i <= m; i++) { // n부터 m까지 반복
        int k = sqrt(i); // k는 i의 제곱근
        if (k * k == i) { // k제곱이 i랑 같을때 , 완전제곱수일때
            result.push_back(i); // 백터에 i를 넣음
        }
    }
        if (result.empty()) {
            // 완전제곱 수 없으면 -1 출력
            cout << -1 << endl;
        }
        else {
            int sum = 0;
            for (int x :  result) { // 백터안에 있는 값을 꺼내 각 원소들을 x 변수 안에 넣고 sum에 다시 저장
                sum += x;
            }
            sort(result.begin(), result.end());
            cout << sum << endl << result[0] << endl; // 모든 합과 완전제곱 수 중 가장 작은 값 출력
        }
    return 0;
}