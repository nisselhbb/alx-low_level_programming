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
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
