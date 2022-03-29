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
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return ('\0');
}
