#include "main.h"
/**
*_strncpy - main function
*@dest: destination string
*@src: source string
*@n: integer entered
*Description: copies a string similarly like strncpy
*Return: returns copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

