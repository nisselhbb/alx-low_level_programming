#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 * to the function
 * Return: nil, no return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0;
	char *j;
	double f;

	va_start(args, format);

	while (format && format[n])
	{
	switch (format[n])
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			j = va_arg(args, char*);
			if (j == NULL)
				j = "(nil)";
			printf("%s", j);
			break;
		default:
			n++;
			continue;
	}
	if (format[n + 1] != '\0')
	{
		printf(", ");
	}
	n++;
	}
	printf("\n");
	va_end(args);
}
