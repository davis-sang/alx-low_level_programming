#include "main.h"
/**
*print_rev - main function
*@s: input string
*Description: prints string in reverse
*Return: none
*/
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
