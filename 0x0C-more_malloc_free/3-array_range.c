#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimun of integers
 * @max: maximum of integers
 * Return: NULL if it fails, pointer to the
 * newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = (int *) malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
