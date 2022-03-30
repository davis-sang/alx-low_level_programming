#include "main.h"
/**
*prime_checker - checks if a number is a prime number
*@n: input integer
*@i: input integer test
*Return: Returns 0 if number is not a prime no. and 1 if the
*number is a prime number.
*/
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_checker(n, i - 1));
}
/**
*is_prime_number - returns 0 if a number is not a prime number or 1 if it is.
*@n: input integer to be checked
*Return: 0 or 1
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}
