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

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (line = 0; line < size; line++)
	{
		if (count < size - line - 1)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
