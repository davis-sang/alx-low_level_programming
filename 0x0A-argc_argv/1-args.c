#include "main.h"
#include <stdio.h>
/**
*main - main function
*@argc: argument counter
*@argv: array of strings
*Description: prints the number of arguments passed into it.
*Return: 0 success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
