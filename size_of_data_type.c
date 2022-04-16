#include <stdio.h>

/**
* main - prints the size of each data type
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	char b;
	float c;
	long d;
	long long e;
	short f;

	printf("The size of int is: %zu byte(s)\n",sizeof(a));
	printf("The size of char is: %zu byte(s)\n",sizeof(b));
	printf("The size of float is: %zu byte(s)\n",sizeof(c));
	printf("The size of long is: %zu byte(s)\n",sizeof(d));
	printf("The size of long long is: %zu byte(s)\n",sizeof(e));
	printf("The size of short is: %zu byte(s)\n",sizeof(f));
	return (0);

}
