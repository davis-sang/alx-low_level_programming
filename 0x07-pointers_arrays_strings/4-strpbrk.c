#include "main.h"
/**
*_strpbrk - locates the first occurrence in the string pointed
*to by s of any character from the string pointed to by accept.
*@s: string pointed to by s pointer
*@accept: string pointed by accept pointer
*Return: returns a pointer to the character or a null pointer if no
*character from the s occurs in accept.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	}
	return (0);
}
