#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function concatenates two strings.
*@s1: first string
*@s2: second string
*@n: length of the second string to be concatenated.
*Return: returns the pointer to the newly concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;
	char *c = "";

	if (s1 == NULL)
		s1 = c;
	if (s2 == NULL)
		s2 = c;
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}
