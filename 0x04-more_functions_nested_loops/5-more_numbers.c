#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: no return
 */
void more_numbers(void)
{
	char i;
	char n;

	for (i = 1; i <= 10; i++)
	{
		for (n = '0'; n <= 'E'; n++)
		{
			_putchar(n);
		}
		_putchar(i);
	}
	_putchar('\n');
}