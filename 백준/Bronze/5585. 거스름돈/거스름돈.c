#include <stdio.h>

int main() {
    int b;
    int m = 1000;
    int count = 0;
    int coins[6] = { 500, 100, 50, 10, 5, 1 };

    scanf("%d", &b);
    int change = m - b;

    int i = 0;

    while (change > 0) {
        if (change >= coins[i]) {
            change -= coins[i];
            count++;
        }
        else {
            i++;
        }
    }

    printf("%d\n", count);

    return 0;
}
