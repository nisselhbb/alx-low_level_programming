#include "main.h"

/**
 * swap_int - swaps integers' values
 * @a: ineger 1
 * @b: integer 2
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
