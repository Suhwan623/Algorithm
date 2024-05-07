#include <stdio.h>
int main(void) {
	int a = 0;
	int b = 1;
	int c;
	int num;

	scanf("%d", &num);

	if (num < 2)
	{
		if (num == 0)
			printf("0");
		else
			printf("1");
	}
	else
	{
		for (int i = 1; i < num; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d", c);
	}
	return 0;
}