#include "main.h"
/**
*_strlen - main function
*@s: input char
*Description: returns the length of string
*Return: length of string
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
