#include "main.h"
int is_prime_helper(int n, int i);

/**
 * is_prime_number - looks for prime numbers
 * @n: number
 * Return: 1 if it is a prime number, 0 if it is
 * not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, n - 1));
}
/**
 * is_prime_helper - helper function that performs
 * the check for primality
 * @n: number1
 * @i: number2
 * Return: 1 if prime number, 0 if not
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}
