#include <stdio.h>

/**
* main - takes user input and prints 
* the range of numbers from first to last
* Return: Always 0 (Success)
*/
int main (void)
{
	int first,last;

	printf("Enter a starting number:\n");
	scanf("%d",&first);


	printf("Enter an ending number:\n");
	scanf("%d",&last);

	while(first<=last)
	{
		printf("%d\n",first);
		first++;

	}
	return (0);
}
