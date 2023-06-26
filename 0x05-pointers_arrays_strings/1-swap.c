#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps integers' values
 * @a: ineger 1
 * @b: integer 2
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;

	*a = *b;
	*b = *a;

	printf("*a = %d\n", *a);
	printf("*b = %d\n", *b);
}
