#include <stdio.h>

int main(void)
{
	int age;


	printf("How old are you? ");
	scanf("%d",&age);

	eligible:
		while (0==0)
		{
			printf("You're old enough to vote. congrats!\n");
			break;
		}
	ineligible:
		printf("You're not eligible to vote\n");
	if (age<16)
	{
	goto ineligible;
	}
	else
	{
	goto eligible;
	}
	return (0);

}
