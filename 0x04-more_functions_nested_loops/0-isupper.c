#include "main.h"

/**
 * _isupper - Entry point (check for uppercase character)
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
