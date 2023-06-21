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
			if (r > 9)
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			else if (count != 0)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			if (count != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
