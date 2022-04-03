#include <stdio.h>
/**
* main - main function
* @argc: argument counter
* @argv: array of strings
* Description: Prints all the arguements it receives.
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
