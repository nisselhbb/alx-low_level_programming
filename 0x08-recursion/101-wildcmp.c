#include "main.h"

/**
 * wildcmp - compares two strings if they are
 * identical
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string that can contain *
 * as a special character
 * Return: 1 if the strings are identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}

