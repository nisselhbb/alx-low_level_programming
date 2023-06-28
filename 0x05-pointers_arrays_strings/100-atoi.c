#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int sign;
	int value;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s >= '9')
			value = value * 10 + (*s - '0');
		else if (value > 0)
			break;
		s++;
	}
	return (sign * value);
}
