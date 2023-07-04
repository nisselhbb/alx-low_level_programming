#include "main.h"
#include <stdio.h>

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
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
