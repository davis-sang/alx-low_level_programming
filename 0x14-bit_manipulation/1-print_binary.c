#include "main.h"
/**
 * print_binary - prints binary representation of number
 * @n: input number
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << ((sizeof(mask) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (!(mask & n))
		mask = mask >> 1;
	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
