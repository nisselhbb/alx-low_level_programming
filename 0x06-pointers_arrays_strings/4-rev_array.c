#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to the to the array to be reversed
 * @n: number of the elements of the array
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int length = n;
	int i;
	int temp;

	for (i = 0; i < length / 2; i++)
	{
		temp = a[i];
		a[i] = a[length - i - 1];
		a[length - i - 1] = temp;
	}
}
