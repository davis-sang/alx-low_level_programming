#include "main.h"
/**
*print_sign - main function
*@n: entered number
*Description: prints the sign of the entered number.
*Return: 1 if no. is greater than 0, 0 if n is 0 and -1 if n is less than zero
*/
int print_sign(int n)
{
	int j = 0;

	if (n > 0)
	{
		j = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		j = 0;
		_putchar('0');
	}
	else
	{
		j = -1;
		_putchar('-');
	}
	return (j);
}
