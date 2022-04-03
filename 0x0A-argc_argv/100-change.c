#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*@argc: argument counter
*@argv: array of strings
*Description: program prints minimum number of coins to make change
*for an amount of money.
*Return: 0 on success
*/
int main (int argc, char *argv[])
{
	int i, j, total, m;
	int c[5] = {25, 10, 5, 2, 1};

	total = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m <= 0)
	{
		printf("0");
		return (1);
	}
	for (j = 0; j < 5; j++)
	{
		i = m / c[j];
		m -= i * c[j];
		total += i;
		if (m == 0)
			break;
	}
	printf("%d\n", total);
	return(0);
}		
