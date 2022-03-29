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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
					break;
			}
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
