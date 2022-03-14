#include <stdio.h>
/**
*main - main block
*Description: prints all the possible combinations of two digits
*32 and 44 ref space and comma ascii.
*Return: 0
*/
int main(void)
{
	int i, j, d;

	d = 0;

	while (d < 100)
	{
		i = d % 10;
		j = d / 10;
		if (j < i)
		{
			putchar(j + '0');
			putchar(i + '0');
			if (d < 89)
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

