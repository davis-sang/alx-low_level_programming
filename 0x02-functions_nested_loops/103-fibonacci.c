#include <stdio.h>
/**
 *main - print sum of even valued terms that do not exceed 40000000 in
 *fibonacci sequence
 *Return: 0 always.
 */
int main(void)
{
	long int i, x = 1, y = 2, k = 0, l = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			l = l + y;
		}
		k = x + y;
		x = y;
		y = k;

	}
	printf("%ld\n", l);
	return (0);
}
