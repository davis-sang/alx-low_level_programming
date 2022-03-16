#include "main.h"
/**
*_islower - main function
*@c: input character
*Description: the function checks for the lowercase character and returns
*1,otherwise returns 0
*Return: 1 if lowercase and 0 if not lowercase
*/
int _islower(int c)
{
	char l;
	int i = 0;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (c == l)
			i = 1;
	}
	return (i);
}

