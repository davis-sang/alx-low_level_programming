#include "main.h"
/**
*_strlen_recursion - function returns string legnth
*@s: string to be checked
*Return: returns integer for string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
