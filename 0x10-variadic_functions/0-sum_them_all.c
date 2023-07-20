#include "variadic_functions.h"
/**
 * sum_them_all - prints the sum of all its
 * parameters
 * @n: an integer
 * Return: sum of all the parameters, or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	const unsigned int args;
	unsigned int i, sum = 0;

	if (n == 0 || args == NULL)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + args[i];
	}
	return (sum);
}

