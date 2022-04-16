#include <stdio.h>

/**
* main - reads intergral numbers from user input
* it then sums them up
* Return: Always 0 (Success)
*/
int main(void)
{
	int num1,num2;
	float f=3;

	printf("The casted number is: %.1f\n",f);
	printf("Enter the 1rst number:\n");
	scanf("%d", &num1);
	printf("What's the 2nd number?\n");
	scanf("%d, &num2");
	printf("The answer is: %d",num1+num2);
	return (0);

}
