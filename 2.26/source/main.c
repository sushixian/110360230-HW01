#include <stdio.h>

int main(void)
{
	int n, m;
	printf("please insert two numbers; \n");
	scanf_s("%d%d", &n, &m);

	if (n % m == 0)
	{
		printf("%d is a multiple of %d", n, m);
	}
	else
	{
		printf("%d is not a multiple of %d", n, m);
	}
	system("pause");
	return 0;
}