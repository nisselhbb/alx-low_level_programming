#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: no return
 */
void more_numbers(void)
{
	int i;
	char n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if ((n / 10) + '0')
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
