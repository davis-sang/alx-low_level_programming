#include "main.h"
/**
*_strncat - main function
*@dest: input string
*@src: concatenated to dest string
*@n: defines the length of the string to be cut
*Description: function concatenates two strings dependant on the length set.
*Return: the concatenated string.
*/
char *_strncat(char *dest, char *src, int n)
{
	char *strcat1 = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (strcat1);
}
