#include <stdio.h>
/**
*main - main block
*Description: program that prints the alphabet in lowercase using putchar
*followed by a new line
*Return: 0
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
