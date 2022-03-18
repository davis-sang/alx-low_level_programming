#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*Description: finds the prime numbers of a number and prints
*the largest number.
*Return: 0
*/
int main(void)
{
	long int i, n, t;

	n = 612852475143;
	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			if (t < i)
				t = i;
			n = n / i;
		}
	}
	printf("%ld\n", t);
	return (0);
}
