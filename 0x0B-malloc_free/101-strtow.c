#include "main.h"
#include <stdlib.h>
/**
*wcount - counts the number of words in a string
*@s: string input
*Return: count of words.
*/
int wcount(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}
/**
*strtow - function returns a pointer to an array of strings
*@str: input string
*Return: returns pointer to array of strings.
*/
char **strtow(char *str)
{
	int i, j, k, l, c = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = wcount(str);
	if (c == 1)
		return (NULL);
	w = malloc(c * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[c - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[c - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
