#include "main.h"
int _sqrt_helper(int n, int i)

/**
 * _sqrt_recursion - calculates the natural square
 * root of a number
 * @n: number
 * Return: -1 if error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - helper function that performs
 * the recursive calculations
 * @n: number1
 * @i: number2
 * Return: return natural square root of n
 */
int _sqrt_helper(int n, int i)
{
	else if (i * i > n)
	{
		return (-1);
	}

	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
