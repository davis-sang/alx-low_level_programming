#include "main.h"
/**
*_pow_recursion - returns the value of integer x raised to the power of y
*@x: integer x input
*@y: the power
*Return: returns the power of the integer or -1 if integer is less than 1
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
