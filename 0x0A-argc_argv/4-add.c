#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
*main - main function
*@argc: argument counter
*@argv: array of strings
*Description: Adds positive numbers.
*Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int i, sum;

	unsigned int long j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
