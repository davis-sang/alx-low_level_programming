#include "main.h"
/**
*print_sign - main function
*@n: entered number
*Description: prints the sign of the entered number.
*Return: 1 if no. is greater than 0, 0 if n is 0 and -1 if n is less than zero
*/
int print_sign(int n)
{
	int j;

	if (n > 0)
	{
		_putchar('+');
		j = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		j = 0;
	}
	else
	{
		_putchar('-');
		j = -1;
	}
	return (j);
}
