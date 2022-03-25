#include "main.h"
/**
*rot13 - function to encode string using rot13
*@s: entered string
*Return: encoded string
*/
char *rot13(char *s)
{
	int i, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
