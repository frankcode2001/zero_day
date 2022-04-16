#include <stdio.h>
#include <stdlib.h>

int cube()
{
	int num;
	int result;
	result = num*num*num;

}

int main()
{
	int num;

	printf("What's the number:\n");
	scanf("%d", num);

	printf("Cube of %d is: %d",num, cube(num));

	return (0);
}
