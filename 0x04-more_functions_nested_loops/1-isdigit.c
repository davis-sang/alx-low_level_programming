#include "main.h"
/**
*_isdigit - main function checks if the value is an integer
*@c: input integer
*Return: 1 if the integer is between 0 - 9,  0 if otherwise.
*/
int _isdigit(int c)
{
	int j = 0;

	if (c >= 48 && c <= 57)
		j = 1;
	else
		j = 0;
	return (j);
}
