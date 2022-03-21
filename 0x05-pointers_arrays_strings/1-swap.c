#include "main.h"
/**
*swap_int - main function
*@a: first input integer
*@b: second input integer
*Description: swap two integers
*Return: none
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
