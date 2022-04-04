#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - function that returns a pointer to a newly allocated space
*in memory, which contains a copy of the string given as a parameter.
*@str: input string
*Return: returns pointer to new string or NULL if string is null or
*insufficient memory.
*/
char *_strdup(char *str)
{
	char *s;
	char *p;
	int l;

	if (str == NULL)
		return (0);
	l = 0;
	while (str[l])
		l++;
	s = malloc(sizeof(char) * (l + 1));
	p = s;
	if (p == 0)
		return (0);
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (s);
}
