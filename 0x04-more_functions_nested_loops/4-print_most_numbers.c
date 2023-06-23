#include "main.h"

/**
 * print_most_numbers - prints most numbers
 *
 * Return: no return
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
