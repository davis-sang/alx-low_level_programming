#include "main.h"
/**
*print_number - print numbers
*@n: input number.
*not allowed to use 'long', pointers arrays or hardcode special values.
*Return: none
*/
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = n * -1;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
