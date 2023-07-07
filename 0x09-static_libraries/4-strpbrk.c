#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: string of searched bytes
 *
 * Return: pointer to s or 0 if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
