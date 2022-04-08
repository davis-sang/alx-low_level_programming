#include "main.h"
#include <stdlib.h>
/**
*_calloc - allocates memory for an array using malloc
*@nmemb: number of elements in an array.
*@size : integer size in bytes of the elements
*Return: void pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
