#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the characte to be located
 *
 * Return: the pointer to s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}


