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

	for (number = '0'; number <= 9; number++)
	{
		for (count = '0'; count <= 9; count++)
		{
			_putchar(number * count);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
