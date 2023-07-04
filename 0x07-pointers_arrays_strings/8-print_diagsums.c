#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals of
 * a square matrix of integers
 * @a: pointer
 * @size: size of diagonals
 *
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	size = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)
			{
				size = size + a[i][j];
			}
		}
		_putchar (size);
	}
}
