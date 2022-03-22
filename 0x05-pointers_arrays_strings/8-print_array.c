#include "main.h"
#include <stdio.h>
/**
*print_array - main function
*@a: array entered
*@n: array index to be printed
*Description: funtion prints the elements of an array of integers.
*Return: none
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
