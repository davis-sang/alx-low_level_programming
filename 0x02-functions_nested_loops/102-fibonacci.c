#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*Description: prints the first 50 fibonacci numbers
*Return: 0
*/
int main(void)
{
	int i, j, k, count;

	i = 1;
	j = 2;
	k = 0;
	count = 49;
	for (i = 0; i < count; i++)
	{
		printf("%i ", i);
		k = i + j;
		i = j;
		j = k;
		if (i == 48)
			printf("%i\n", i);
	}
	return (0);
}
