#include <stdio.h>

int main(void)
{
	int num;
	char alph[26]="abcdefghijklmnopqrstuvwxyz";

	for (num=0; num < 26; num++)
	{
		putchar(alph[num]);

	}
	putchar('\n');
	return (0);
}
