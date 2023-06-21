#include "main.h"

/**
 * _islower - Enty point
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


