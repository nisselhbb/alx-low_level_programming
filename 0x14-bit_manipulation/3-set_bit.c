#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: number
 * @index: is the index, starting from 0
 * Return: 1 if it succeeded, -1 if error
 * occures
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > 63)
		return (-1);
	j = 1 << index;
	*n = *n | j;
	return (1);
}
