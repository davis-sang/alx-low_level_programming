#include "main.h"
/**
*main - main block
*Description: prints _putchar
*Return: 0
*/
int main(void)
{
	int i, j;
	char c[] = "_putchar";

	j = sizeof(c);
	for (i = 0; i < j; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
