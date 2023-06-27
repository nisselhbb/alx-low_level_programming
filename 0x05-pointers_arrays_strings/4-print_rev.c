#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < middle; i++)
		{
			temp = s[i];
			s[i] = s[length - i - 1];
			s[length - i - 1] = temp;
		}
	}
	_putchar('\n');
}

