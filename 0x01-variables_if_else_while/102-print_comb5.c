#include <stdio.h>
/**
*main - main function
*Description: program that prints all possible combinations of
*two-digit numbers
*numbers are seperated by spaces and should be printed with two digits
*combinations seperated with commas.
*numbers should be printed in ascending order.
*use putchar function only.
*Return: 0
*/
int main(void)
{
	int i, j;
	int x, y, z, w;

	for (i = 0; i < 100; i++)
	{
		x = i / 10;
		y = i % 10;
		for (j = 0; j < 100; j++)
		{
			z = j / 10;
			w = j % 10;
			if (x < z || (x == z && y < w))
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(32);
				putchar(z + '0');
				putchar(w + '0');
				if (!(x == 9 && y == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
