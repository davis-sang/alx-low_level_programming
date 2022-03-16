#include "main.h"
/**
*main - main block
*Description: prints _putchar
*Return: 0
*/
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
