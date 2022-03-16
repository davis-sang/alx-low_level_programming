#include "main.h"
/**
*_abs - main function
*@j: an integer input
*Description: function returns the absolute vakue of a number
*Return: absolute value of a number
*/
int _abs(int j)
{
	if (j >= 0)
		return (j);
	else
		return (j * -1);
}
