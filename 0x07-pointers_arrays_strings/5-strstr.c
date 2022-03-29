#include "main.h"
/**
*_strstr - function locates the first occurrence in the string pointed
*to by `haystack` of the sequence of characters (excluding the terminating null
*character) in the string pointed to by `needle`
*@haystack: string pointed to by haystack pointer
*@needle: string pointed to by the needle pointer
*Return: returns a pointer to the located string, or a null
*pointer if the string is not found. if 'needle' points to a string
*of zero length the function returns `haystack`
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, p, q;
	char *t = '\0';

	for (p = 0; haystack[p] != '\0'; p++)
		;
	for (q = 0; needle[q] != '\0'; q++)
		;
	
	for (i = 0; i < p; i++)
	{
		if (haystack[i] == needle[0])
		{
			t = &haystack[i];
			for (j = 0; j < q; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					t ='\0';
				break;
				}
				if (j == q - 1)
					i = p;
			}
		}
	}
	return (t);
}
