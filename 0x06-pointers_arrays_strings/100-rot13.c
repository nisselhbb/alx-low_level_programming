#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string
 *
 * Return: the string
 */
char *rot13(char *s)
{
	int a, b;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (s[a] == letters[b])
			{
				s[a] = rot[b];
				break;
			}
		}
	}
	return (s);
}
