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
	int n = 0, num;
	char *j;
	double f;
	char c;

	va_start(args, format);

	while (format && format[n])
	{
	switch (format[n])
	{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d", num);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			j = va_arg(args, char*);
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
