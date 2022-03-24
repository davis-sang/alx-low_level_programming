#include "main.h"
/**
*string_toupper - main function
*@a: input string
*Description: converts string to uppercase.
*Return: the converted string to uppercase
*/
char *string_toupper(char *a)
{
	char *tmp = a;

	while (*tmp != '\0')
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp = *tmp - ('a' - 'A');
		tmp++;
	}
	return (a);
}
