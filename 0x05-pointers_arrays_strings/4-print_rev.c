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
	int a = 0;
	int b = length - 1;
	char temp;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
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

