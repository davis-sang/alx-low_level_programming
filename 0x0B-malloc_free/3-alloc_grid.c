#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function returns a pointer to a two dimensional array.
*@width: width size of 2D array.
*@height: hieght size of 2D array.
*Return: pointer to 2D array, NULL if fails.
*/
int **alloc_grid(int width, int height)
{
	int a, b, i, j;
	int **d;

	a = width;
	b = height;
	if (a <= 0 || b <= 0)
		return (NULL);
	d = (int **)malloc(sizeof(int *) * b);
	if (d == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		{
		d[i] =(int *)malloc(sizeof(int) * a);
		if (d[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(d[j]);
			free(d);
			return (NULL);
		}
		for (j = 0; j < b; j++)
		{
			d[i][j] = 0;
		}
	}
	return (d);
}
