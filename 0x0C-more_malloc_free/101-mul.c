#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*@argc: argument counter
*@argv: arguments passed
*Return: multiplication output.
*/
int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
}
