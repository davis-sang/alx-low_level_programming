#include "main.h"
/**
*cap_string - main function
*@a: input string
*Description: capitalizes the first letter of each word
*Return: return type char
*/
char *cap_string(char *a)
{
	int i = 0, j;
	int sp[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 32;
	i++;
	for (; a[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (a[i] == sp[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = a[i + 1] - 32;
				break;
			}
		}
		
	}
	return (a);
}
