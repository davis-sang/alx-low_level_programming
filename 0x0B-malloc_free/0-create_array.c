#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*create_array - creates array of chars and initializes it with a specific char.
*@size: size of character
*@char: character input
*Return: NULL if size equals 0 or if it fails, otherwise returns 
*pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	char *cp;
	unsigned int i;

	i = 0;
	if (size <= 0)
		return (0);
	cp = malloc(sizeof(char) * size);
	if(cp == 0 )
		return (0);
	while (i < size)
	{
		*(cp + i) = c;
		i++;
	}
	*(cp + i) = '\0';
	return (cp);
}
