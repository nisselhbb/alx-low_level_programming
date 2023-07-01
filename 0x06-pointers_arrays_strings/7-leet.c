#include "main.h"

/**
 * leet - turns letters os a string into leet
 * @s: pointer to the string
 *
 * Return: the string
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
