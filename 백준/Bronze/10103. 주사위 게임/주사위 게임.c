#include <stdio.h>

int main() {
	int a1, a2;
	int chang = 100;
	int sang = 100;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a1, &a2);
		if (a1 < a2)
			chang = chang - a2;
		else if (a1> a2)
			sang = sang - a1;
	}
	printf("%d\n", chang);
	printf("%d", sang);
}