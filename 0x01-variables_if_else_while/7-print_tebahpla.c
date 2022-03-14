#include <stdio.h>
/**
*main - main block
*Description: prints the lowercase alphabet in reverse followed by neweline.
*Return: 0
*/
int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
