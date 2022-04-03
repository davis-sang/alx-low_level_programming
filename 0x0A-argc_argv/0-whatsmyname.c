#include <stdio.h>
#include "main.h"
/**
*main - main function
*Description: program print the program name followed by a new lline.
*Return: 0
*/
int main (int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n",argv[0]);
	return (0);
}
