#include "main.h"

/**
 * _abs - Enrty point
 * @n: the integer
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
