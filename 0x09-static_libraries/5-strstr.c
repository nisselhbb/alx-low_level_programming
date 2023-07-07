#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to the main string
 * @needle: pointer to the substring
 *
 * Return: return to needle, or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int a = strlen(haystack);
	int b = strlen(needle);

	for (i = 0; i <= a - b; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == b)
			return (&haystack[i]);
	}
	return (0);
}
