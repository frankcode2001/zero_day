#include <stdio.h>

int main(void)
{
	char alph='A';

	do
	{
		putchar(alph);
		alph++;
	}
	while (alph<='Z');

	putchar('\n');
	return (0);
}
