#include <stdio.h>
/**
*main - main function
*Description: fizz-buzz test, fizz for multiples of 3,
*buzz for 5 and fizbuzz for both.
*Return: 0 success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%i ",i);
	}
	printf("\n");
	return (0);
}
