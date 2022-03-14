#include <stdio.h>
/**
*main - main block
*Description: prints all the possible combinations of single-digitnumbers.
*Note that the 32 and 44 ref ascii for space and comma.
*Return: 0
*/
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		putchar(d + '0');
		if (d < 9)
			putchar(32);
			putchar(44);
		d++;
	}
	putchar('\n');
	return (0);
}
