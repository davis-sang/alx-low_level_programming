#include <stdio.h>
/**
*main - main block
*Description: prints all the base 16 numbers in lowercase followed by a newline
*Return: 0
*/
int main(void)
{
	char l = 'a';
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
}
