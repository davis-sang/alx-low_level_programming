#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet in lower case followed by a new line.
*/
void print_alphabet_x10(void)
{
	int i;

	i = 10;
	while (i < 10)
	{
		char l;

		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		i++;
	}
}
