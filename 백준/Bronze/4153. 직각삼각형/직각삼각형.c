#include <stdio.h>

int main(void)
{
    long a, b, c;

    while (1)
    {
        long A, B, C;
        scanf("%ld %ld %ld", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;

        A = a * a, B = b * b, C = c * c;
        if (A + B == C || C + B == A || C + A == B)
            printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}