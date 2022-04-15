#include "function_pointers.h"
/**
*array_iterator - executes function given on each element of an array.
*@array: array input
*@size: size of array
*@action: pointer to the function
*Return: none
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
