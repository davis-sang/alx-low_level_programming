#include "main.h"
/**
*print_number - print number entered
*@n: integer entered
*Return: none
*/
void print_number(int n)
{
	int i;

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
