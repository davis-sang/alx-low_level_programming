#include "main.h"
/**
*_atoi - main function
*@s: entered string
*Description: function to convert string to integer
*Return: return type integer.
*/
int _atoi(char *s)
{
	unsigned int c = 0, z = 0, ti = 0, p = 1, m = 1, i;

	while (*(s + c) != '\0')
	{
		if (z > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			p *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (z > 0)
				m *= 10;
			z++;
		}
		c++;
	}

	for (i = c - z; i < c; i++)
	{
		ti = ti + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ti * p);
}
