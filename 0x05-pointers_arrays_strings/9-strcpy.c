#include "main.h"
#include <stdio.h>
/**
*_strcpy - main function
*@src: source
*@dest: destination
*Description: copies the string pointed to by the source to the destination.
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	for (; c >= 0; c++)
	{
		*(dest + c) = *(src + c);
		if (*(src + c) == '\0')
			break;
	}
	return (dest);
}
