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
	int i, j;
	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = (int **)malloc(sizeof(int *) * height);
	if (d == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		{
		d[i] = (int *)malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(d[j]);
			free(d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}
	return (d);
}
