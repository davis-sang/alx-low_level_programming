#include "main.h"
/**
*print_line - print _ the entered no. of times
*@n: entered input
*Return: none
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
