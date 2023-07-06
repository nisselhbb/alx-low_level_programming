#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square
 * root of a number
 * @n: number
 * Return: -1 if error, if not the natural square
 * of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (_sqrt_recursion(n * n));
}
