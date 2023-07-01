#include "main.h"
#include <string.h>

/**
 * string_toupper - changes lowercase letters of string to uuppercase
 * @s: pointer to the string
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int length = strlen(s);
	int i;

	for (i = 0; i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
