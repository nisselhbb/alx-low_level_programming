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
	int line;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		while (count < size)
		{
			_putchar(35);
			count++;
		}
		_putchar('\n');
	}
}
