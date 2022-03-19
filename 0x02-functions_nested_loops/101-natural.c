#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*Description: computes the multiples of 3 and
*5 of a number and returns the sum.
*Return: 0
*/
int main(void)
{
	int x, i, a;

	x = 1024;
	a = 0;
	for (i = 0; i < x; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a += i;
		} else
			continue;
	}
	printf("%i\n", a);
	return (0);
}
