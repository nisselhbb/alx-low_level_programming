#include "main.h"

/**
 * print_line - prints a straight line of underscores
 * @n: the desired amount of underscores
 *
 * Return: no return
 */
void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
