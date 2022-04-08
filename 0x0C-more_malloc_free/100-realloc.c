#include "main.h"
#include <stdlib.h>
/**
*_memcpy - copies memory area from source to destination
*@dest: destination pointed to
*@src: source pointed to
*@n: n integer no. of bytes
*Return: Returns destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
/**
*_realloc - reallocates memory block using malloc and free.
*@ptr: pointer
*@old_size: present memory size.
*@new_size: memory size desired
*Return: pointer to reallocated memory.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == 0)
			return (0);
		free(ptr);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	p = malloc(new_size);
	if (p == 0)
		return (0);
	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
