#include "main.h"
/**
*_isupper - checks for uppercase characters
*@c: input number
*Return: 1 if uppercase and 0 if otherwise
*/
int _isupper(int c)
{
	int i;

	if ((c >= 'A') && (c <= 'Z'))
		i = 1;
	else
		i = 0;
	return (i);
}
