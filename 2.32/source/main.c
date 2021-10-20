#include <stdio.h>

int main(void) {
	
	float w, h, B;
	printf("please insert your weight and height in meters\n");
	scanf_s("%f%f", &w, &h);
	B = w / (h*h);
	printf("your BMI is: %f\n", B);
	printf("BMI VALUES\nUnderweight:	less than 18.5\nNormal:	between 18.5 and 24.9\nOverweight:	between 25 and 29.9\nObese:	30 or greater\n");
	system("pause");
	return 0;


}