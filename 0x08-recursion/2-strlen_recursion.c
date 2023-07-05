#include "main.h"

/**
 * _strlen_recursion -returns the length
 * of a string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = _strlen_recursion(s);

	if (*s == '\0')
		return (0);
	return (length);
}
