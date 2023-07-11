#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: thz size of the array
 * @c: the initializing character in the
 * array
 * Return: 0 or NULL if it fails, pointer to the
 * array of the opposite
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (array == 0)
	{
		return (0);
	}

	array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
