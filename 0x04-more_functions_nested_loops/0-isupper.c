#include "main.h"
/**
*_isupper - main function
*Description: checks if input is uppercase
*@c - input character entered
*Return: return 0 if lowercase and 1 for uppercase
*/
int _isupper(int c);
{
	char l;
	int i;

	for(l = 'A'; l <= 'Z'; l++)
	{
		if (l == c)
			i = 1;
		else
			i = 0;
	}
	return i;
}
