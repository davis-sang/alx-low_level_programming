#include "main.h"
/**
*print_last_digit - main function
*@r: integer input
*Description: this function prints the last digit of a number
*Return: returns last digit of the number r
*/
int print_last_digit(int r)
{
	int l;

	if (r < 0)
		l = -1 * (r % 10);
	else
		l = r % 10;
	_putchar('0' + (l % 10));
	return (l % 10);
}
