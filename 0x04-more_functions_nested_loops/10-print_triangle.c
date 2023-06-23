#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int line;
	int count;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		for (count = 0; count < size; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar(35);
		}
		_putchar('\n');
	}
}
