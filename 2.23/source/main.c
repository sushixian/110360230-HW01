#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c,max,min;

	printf("please insert three integers\n");
	scanf_s("%d%d%d", &a, &b, &c);

	if (a >= b && a >= c && b >= c)
	{
		max = a;
		min = c;
	}
	if (a >= b && a >= c && c >= b)
	{
		max = a;
		min = b;
	}
	if (b >= a && b >= c && a >= c)
	{
		max = b;
		min = c;
	}
	if (b >= a && b >= c && c >= a)
	{
		max = b;
		min = a;
	}
	if (c >= b && c >= a && b >= a)
	{
		max = c;
		min = a;
	}
	if (c >= b && c >= a && a >= b)
	{
		max = c;
		min = b;
	}
	
	printf("the largest number is %d\n", max);
	printf("the smallest number is %d\n", min);

	system("pause");
	return 0;
}