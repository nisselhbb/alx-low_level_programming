#include "main.h"

/**
 * print_number - prints integers
 * @n: integer to be printed
 *
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a = n;
	unsigned int b = n;
	unsigned int c = n;
	double d = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			c = n * -1;
			_putchar('-');
		}
		while (d <= c)
			d = d * 10;
		a = d / 10;

		while (a >= 1)
		{
			b = c / a;
			_putchar(b + '0');
			c = (c - (a * b));
			a = a / 10;
		}
	}
}
