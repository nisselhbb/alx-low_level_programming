#include "main.h"

/**
 * factorial - Entry point
 * @n: pointer to the given number
 * Return: -1 if error,if not factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
