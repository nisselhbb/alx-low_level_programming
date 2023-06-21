#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: no return
 */
void times_table(void)
{
	int number;
	int count;
	int r;

	for (number = '0'; number <= 9; number++)
	{
		for (count = '0'; count <= 9; count++)
		{
			r = number * count;
			_putchar('r');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
