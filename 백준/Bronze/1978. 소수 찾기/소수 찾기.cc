#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        bool prime = true; //초기값을 소수로 설정
        if (num <= 1) {  // 1이 num보다 크거나 같다면 소수 X
            prime = false; //1은 소수가 아니기 때문에 false로 설정
        }
        else {
            for (int j = 2; j <= sqrt(num); j++) { //num이 소수가 아니라면 num의 약수 중 하나는 num의 제곱근과 작거나 같음
                if (num % j == 0) {
                    prime = false;
                    break;
                }
            }
        }
        if (prime)
            count++;
    }
    cout << count << endl;
    return 0;
}
