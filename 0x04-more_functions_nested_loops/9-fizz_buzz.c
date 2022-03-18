# include <stdlib.h>
# include <stdio.h>
/**
*main - main function
*Description: prints 1 to 100 printing fizz for multiples of 3 
*and multiples of 5 with buzz ; fizz buzz for both.
*Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
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
		{
			printf("%i ", i);
		}
	}
	printf("Buzz\n");
	return (0);
}
