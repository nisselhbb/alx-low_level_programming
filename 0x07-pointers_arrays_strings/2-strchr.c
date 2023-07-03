#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the characte to be located
 *
 * Return: the pointer to s, or 0 if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}


