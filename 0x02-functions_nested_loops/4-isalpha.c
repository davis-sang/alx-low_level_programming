#include "main.h"
/**
*_isalpha - main function
*@c: input character
*Return: 1 if c is a letter lowercase or uppercase otherwise 0
*/
int _isalpha(int c)
{
	char l, m;
	int i;

	i = 0;
	for (l = 'a'; l <= 'z'; i++)
	{
		for (m = 'A'; m <= 'Z'; m++)
		{
			if (c == l || c == m)
				i = 1;
		}
	}
	return (i);
}
