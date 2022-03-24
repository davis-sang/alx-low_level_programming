#include "main.h"
/**
*leet - main function
*@s: input string
*Description: encodes a string to 1337
*Return: Return the encoded string
*/
char *leet(char *s)
{
	int i, j;
	int u[] = {65, 69, 79, 84, 76};
	int l[] = {97, 101, 111, 116, 108};
	int n[] = {52, 51, 48, 55, 49};

	j = 0;
	while (*(s + j) != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*(s + j) == l[i] || *(s + j) == u[i])
			{
				*(s + j) = n[i];
				break;
			}
			i++;
		}
		j++;
	}
	return (s);
}
