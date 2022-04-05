#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*argstostr - function that concatenates all the arguments of your program.
*@ac: argument counter
*@av: arguments passed to main
*Return: pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c, d;

	if (ac <= 0 || av == NULL)
		return (NULL);
	c = 0;
	d = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
		d++;
	}
	d++;
	s = malloc(sizeof(char) * d);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
