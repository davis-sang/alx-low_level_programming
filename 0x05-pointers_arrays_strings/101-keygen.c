#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen. As observed from ghidra the expected
 * the expected character legnth is 2772
 * Return: 0 Always.
 */
int main(void)
{
	int a = 0, b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((a + b) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
