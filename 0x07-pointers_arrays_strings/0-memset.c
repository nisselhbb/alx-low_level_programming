#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the string
 * @b: constant byte
 * @n: bytes of memory in the string
 *
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b[i];
	}
	return (s);
}
