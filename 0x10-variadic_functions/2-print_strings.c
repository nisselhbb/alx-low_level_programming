#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: pointer to the string to be
 * printed between the strings
 * @n: number of strings
 * Return: nil, no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *j;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(args, char*);
		printf("%s", j);
		if (j != NULL)
		{
			printf("%s", j);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
