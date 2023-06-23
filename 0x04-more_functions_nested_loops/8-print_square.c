#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int count;
	int line;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		for (count = 0; count < size; count++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
