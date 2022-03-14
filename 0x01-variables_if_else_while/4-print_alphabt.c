#include <stdio.h>
/**
*main - main block
*Description: prints the alphabet using putchar excluding q and e
*Return: 0
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l != 'q' && l != 'e')
			putchar(l);
		l++;
	}
	putchar('\n');

	return (0);
}
