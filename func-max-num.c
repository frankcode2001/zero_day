#include <stdio.h>

int max()
{
	int first_num;
	int second_num;



	printf("FIrst number:\n");
	scanf("%d",&first_num);

	printf("Second number:\n");
	scanf("%d",&second_num);

	if (first_num > second_num)
	{
		printf("%d is larger than %d",first_num, second_num);

	}
	else if (second_num > first_num)
	{
		printf("%d is larger than %d",second_num, first_num);

	}
	else if (first_num == second_num)
	{
		printf("%d is equal to %d",first_num, second_num);

	}

}

int main(void)
{
	max();

}
