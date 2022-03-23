#include "main.h"
/**
*_strcmp - main function
*@s1: takes the first input string
*@s2: takes the second input string
*Description: It returns an integer less than, equal to, or greater
*than zero if s1 is found, respectively,
*to be less  than,to match, or be greater than s2.
*Return: returns int less than , equal to or greater than zero
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		return (*s1 - *s2);
}
