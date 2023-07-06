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
	int i = 0;

	if (n < 0 || i * i > n)
		return (-1);
	else if (i * i < n)
	{
		i = i + 1;
		return (_sqrt_recursion(n));
	}
	else
		return (i);
}
