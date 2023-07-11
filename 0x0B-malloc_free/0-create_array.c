#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: character to be intialized in each
 * element of the array
 * Return: pointer to the array, or NULL if
 * it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array[];
	int a;

	if (size == 0)
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
