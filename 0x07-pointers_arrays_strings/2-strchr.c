#include "main.h"
/**
*_strchr - locates a character in a string and returns the
*pointer to the first occurrence of the character.
*@s: string to be checked
*@c: character to be located.
*Return: return pointer to the first occurrence or null if character not found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);

	if (s[i] == c)
		return (&s[i]);

	return ('\0');
}
