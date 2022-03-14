#include <stdio.h>
/**
*main - main block
*Description: print single digit numbers of base 10 followed by newline.
*Return: 0
*/
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%i", d);
		d++;
	}
	printf("\n");
	return (0);
}

