#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c);
{
	if (c >= 'a' && c >= 'A' && c >= 'z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
