#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: digit to be checked
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
