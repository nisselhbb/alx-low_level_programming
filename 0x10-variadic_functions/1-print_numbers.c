#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: pointer the string to be printed
 * between numbers
 * @n: number of integers passed to the function
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		printf("%d", j);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}
