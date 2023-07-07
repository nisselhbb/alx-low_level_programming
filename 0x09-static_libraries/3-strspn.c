#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: set of acceptable characters
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int index;

	while (*s != '\0')
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				count++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
