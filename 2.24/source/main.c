#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a integer:\n");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("%d is even \n", n);
	}
	else
	{
		printf("%d is odd \n", n);
	}
	system("pause");
	return 0;
}