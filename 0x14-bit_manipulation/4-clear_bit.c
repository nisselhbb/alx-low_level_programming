#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: number
 * @index: index starting from 0
 * Return: 1 if it worked, -1 if error occures
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = *n & ~i;
	return (1);
}
