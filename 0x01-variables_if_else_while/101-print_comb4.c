#include <stdio.h>
/**
*main - main block
*Description: prints all the possible different combinations of three digits
*Return: 0
*/
int main(void)
{
	int d, i, j, k;

	d = 0;
	while (d < 1000)
	{
		i = d / 100;
		j = (d / 10) % 10;
		k = d % 10;
		if (i < j && j < k)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			if (d < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
		d++;
	}
	putchar('\n');
	return (0);
}
