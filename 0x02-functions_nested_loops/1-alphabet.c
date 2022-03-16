#include "main.h"
/**
*print_alphabet - print the alphabet in lowercase followed by a new line
*/
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
