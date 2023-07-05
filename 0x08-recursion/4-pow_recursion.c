#include "main.h"

/**
 * _pow_recursion - returns the value of a number
 * raised by another number
 * @x: the number
 * @y: number of times x to be multiplied
 * Return: -1 if error, if not the value of
 * x raised by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y));
}
