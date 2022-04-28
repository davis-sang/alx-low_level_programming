#include "main.h"
/**
 * get_bit - returns bit value at a given index
 * @n: no.to check bits in.
 * @index: index at which to check bit.
 * Return: value of bit or -1 if err.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}
