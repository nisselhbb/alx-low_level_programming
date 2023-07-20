#include "variadic_functions.h"
/**
 * sum_them_all - prints the sum of all its
 * parameters
 * @n: an integer
 * Return: sum of all the parameters, or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int value, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum = sum + value;
	}
	va_end(args);
	return (sum);
}

