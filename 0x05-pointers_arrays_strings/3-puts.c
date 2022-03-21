#include "main.h"
/**
*_puts - main function
*@str: input string
*Description: prints a string followed by a new line
*Return: none
*/
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
