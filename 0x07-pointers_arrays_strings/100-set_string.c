#include "main.h"
/**
*set_string - sets the value of a pointer to a char.
*@s: pointer to a string to be set to  the value of `to`
*@to: pointer to a string
*Return: none
*/
void set_string(char **s, char *to)
{
	*s = to;
}
