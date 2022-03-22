#include "main.h"
/**
*puts_half - main function
*@str: input string
*Description: prints the second half of the string
*Return: none
*/
void puts_half(char *str)
{
	int c = 0;
	int n;

	while (str[c] != '\0')
		c++;
	n = c / 2;
	if (c % 2 == 0)
	{
		while (n < c)
		{
			if (str[n] != '\0')
				_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (c - 1) / 2;
		while (n < c)
		{
			if (str[n] != '\0')
				_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
