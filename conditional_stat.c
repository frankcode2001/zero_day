#include <stdio.h>

int main(void)
{
	int user_num;
	int num=2;


	printf("Enter a number:");
	scanf("%d",&user_num);
	if (user_num%num==0)
	{
		printf("%d is even",user_num);	
	}
	else
	{
		printf("%d is odd",user_num);
	}
	return (0);

}
