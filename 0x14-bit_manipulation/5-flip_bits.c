#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int c, i;

	c = 0;
	check = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			c++;
		check <<= 1;
	}
	return (c);
}
