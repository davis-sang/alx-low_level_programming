#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - function allocates memory
*@b: input size of the memory
*Return: returns pointer to the allocated memory, exit with
*status 98 if otherwise.
*/
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
