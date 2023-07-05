#include "main.h"

/**
 * factorial - Entry point
 * @n: pointer to the given number
 * Return: -1 if error,1 if it's 0 or 1
 * if not factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
