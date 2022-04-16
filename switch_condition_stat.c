#include <stdio.h>

int main(void)
{
	int num1=10;
	int user_num;

	printf("Enter a number: ");
	scanf(":%d",&user_num);

	switch (user_num)
	{
		case 10:
			printf("user_num == 10");
			break;
	
		case 20:
			printf("user_name == 20");
			break;
		case 50:
			printf("user_num == 50");
			break;

/**	default:
	printf("user_num is != 10 || 20 || 50");
*/
	
	}
	return (0);
}
