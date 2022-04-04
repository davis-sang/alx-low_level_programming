#include <stdio.h>
#include "main.h"
/**
*main - main function
*Description: program print the program name followed by a new lline.
*@argc: argument counter.
*@argv: used to refer to an array of strings.
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
