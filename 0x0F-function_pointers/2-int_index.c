#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of the elements of the array
 * @cmp: pointer to the function to be used to compare
 * values
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}

