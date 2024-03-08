#include <stdio.h>

int main() {
    int t, s, q, p;
    int n;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int car = 0; // 각 테스트 케이스마다 car 변수를 초기화
        scanf("%d %d", &s, &n);
        for (int j = 1; j <= n; j++) {
            scanf("%d %d", &q, &p);
            car += q * p;
        }
        int sum = car + s; // car와 s를 더한 값을 sum에 저장
        printf("%d\n", sum);
    }
    return 0;
}
