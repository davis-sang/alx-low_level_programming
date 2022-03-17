#include "main.h"
/**
*_isupper - main function
*Description: checks if input is uppercase
*@c:  input character entered
*Return: return 0 if lowercase and 1 for uppercase
*/
int _isupper(int c);
{
	int i = 0;

	if (c >= 'A' && c <= 'Z')
		i = 1;
	else
		i = 0;
	_putchar('\n');
	return (i);
}
