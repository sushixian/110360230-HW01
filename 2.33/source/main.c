#include <stdio.h>

int main(void)
{
	float a, b, c, d, e,g;
	
	
	printf("Insert your total miles driven per day\n");
	scanf_s("%f", &a);

	
	printf("Insert your cost per gallon of gasoline\n");
	scanf_s("%f", &b);


	printf("Insert your average miles per gallon\n");
	scanf_s("%f", &c);


	printf("Insert your parking fees per day\n");
	scanf_s("%f", &d);


	printf("Insert your tolls per day\n");
	scanf_s("%f", &e);

	g = a / c * b + d + e;
	printf("User's cost per dat of driving to work is: %f\n",g);

	system("pause");
	return 0;

}