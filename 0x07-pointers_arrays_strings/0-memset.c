#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: memory area pointed to
*@b: constant byte
*@n: unsigned int n
*Return: returns pointer to memory area 's'
*/
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
