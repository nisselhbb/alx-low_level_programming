#include "variadic_functions.h"
/**
 * sum_them_all - prints the sum of all its
 * parameters
 * @n: an integer
 * Return: sum of all the parameters, or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;

	if (n == 0)
		return (0);
	va_list par;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(par + n, unsigned int);
	}
	va_end(par);
	return (j);
}

