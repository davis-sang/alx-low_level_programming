#include "main.h"
/**
*main - main block
*Descprition: prints the alphabet in lowercase followed by a new line
*Return: 0
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
	return (0);
}
