#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int count = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (count < size)
	{
		_putchar('#');
		_putchar('\n');
	}
}
