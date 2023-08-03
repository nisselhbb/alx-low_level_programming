#include "main.h"
/**
 * get_bit - returns the value of a bit at
 * a given index
 * @n: number
 * @index: is the index, starting from 0
 * Return: the value of the bit at index, or
 * -1 if error occures
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index > 64)
	{
		return (-1);
	}
	i = (n >> index) & 1;
	return (i);
}
