#include <stdio.h>
/**
*main - main block
*Description: program that outputs the alphabet in lowercase then in uppercase
*followed by a newline.
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
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);

}
