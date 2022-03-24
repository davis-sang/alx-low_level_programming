#include "main.h"
/**
*reverse_array - main function
*@a: input array
*@n: input integer
*Description: Reverses elements in the array
*Return: none
*/
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (j = 0; j < n - 1; j++)
	{
		for (i = j + 1; i > 0; i--)
		{
			tmp = *(a + i);
			*(a + i) = *(a + (i - 1));
			*(a + (i - 1)) = tmp;
		}
	}
}
