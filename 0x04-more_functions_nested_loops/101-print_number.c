#include "main.h"
/**
*print_number - print number entered
*@n: integer entered
*Return: none
*/
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n == 0)
		_putchar(0);
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
