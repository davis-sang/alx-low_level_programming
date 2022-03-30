#include "main.h"
/**
*sqr_check - checks if the number matches the square if squared
*@n: integer input
*@b: integer input
*Return: Returns match
*/
int sqr_check(int n, int b)
{
	if (b * b == n)
		return (b);
	if (b * b > n)
		return (-1);
	return (sqr_check(n, b + 1));
}
/**
*_sqrt_recursion - return the natural square root of a number
*@n: input integer
*Return: returns the squareroot of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (sqr_check(n, 1));
	return (0);
}
