#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function concatenates two strings.
*@s1: first string
*@s2: second string
*Return: returns the pointer to newly concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	char *p;
	int i, j;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	p = s;
	if (p == 0)
		return (0);
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (s);
}
