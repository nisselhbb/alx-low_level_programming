#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s:pointer to the string
 *
 * Return: no return
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	int b;
	char temp;

	for (b = 0; b < middle; b++)
	{
		temp = s[b];
		s[b] = s[length - b - 1];
		s[length - b - 1] = temp;
	}
}

