#include <stdio.h>

int main(void)
{
	float number;	

	printf("Enter a number:\n");
	scanf("%f",&number);
	printf("The cube of the number is:%.1f", number*number*number);
        return (0);
}


