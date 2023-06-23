#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the desired amount of diagonals to be printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int count, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (count = 0; count < n; count++)
	{
		for (space = 0; space < count; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
