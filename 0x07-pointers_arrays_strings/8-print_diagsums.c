#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of the two diagonals of a square
*matrix of integers.
*@a: pointer to the array square matrix
*@size: array size
*Return: none
*/
void print_diagsums(int *a, int size)
{
	int i , s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += a[i * (size + 1)];
		s2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
