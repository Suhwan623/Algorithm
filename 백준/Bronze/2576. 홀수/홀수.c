#include <stdio.h>

int main() {
    int num[7];
    int min = 101;
    int cnt = 0;
    int odd = 0; 

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 != 0) {
            odd = 1;
            cnt += num[i];
            if (num[i] < min) {
                min = num[i];
            }
        }
    }
    if (!odd) {
        printf("-1\n");
    }
    else {
        printf("%d\n", cnt);
        printf("%d\n", min);
    }
    return 0;
}