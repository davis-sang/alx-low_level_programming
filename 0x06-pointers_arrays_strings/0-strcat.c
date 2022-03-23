#include "main.h"
/**
*_strcat - main function
*@dest: destination string
*@src: source input string
*Description: concatenates the two strings
*Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	char *strcat1 = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (strcat1);
}
