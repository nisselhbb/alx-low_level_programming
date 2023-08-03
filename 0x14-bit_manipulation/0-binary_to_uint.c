#include "main.h"
/**
 * binary_to_uint - converts a binary number to
 * an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * Return: the converted number, 0 if there is a
 * char in b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		number = (number * 2) + (*b - '0');
		b++;
	}
	return (number);
}
