#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n);
		}
		for (n = 10; n <= 14; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
