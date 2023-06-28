#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: pointer to the array
 * @n: number of elements of the array
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	a[n] = {n};
	printf("%d, ", a[n]);
	_putchar('\n');
}
