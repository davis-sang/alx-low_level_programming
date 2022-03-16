include "main.h"
/**
*_islower - checks for lowercase character, returns 1 if lowercase, otherwise 0
*/
int _islower(int c)
{
	char l;
	int i;

	while (l <= 'z')
	{
		if (c == l)
		{
			i = 1;
		}else
			i = 0;
		l++;
	}
	return (i);
}

