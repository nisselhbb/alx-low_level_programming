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
	int length = 0;
	int a = 0;
	int b = length - 1;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;

		a++;
		b--;
	}
	_putchar('\n');
}

