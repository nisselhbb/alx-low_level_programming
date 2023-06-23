#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the desired amount of diagonals to be printed
 *
 * Return: no return
 */
void print_diagonal(int n)
{
	int count = 0;

		while (count < n)
		{
			int space = count;

			while (space > 0)
			{
				_putchar(' ');
				space++;
			}
		_putchar('\\');
		_putchar('\n');
		count++;
		}
}
