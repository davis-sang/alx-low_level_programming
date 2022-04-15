#include "function_pointers.h"
/**
*print_name - prints name
*@name: input name
*@f: function to print
*Return: none
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
