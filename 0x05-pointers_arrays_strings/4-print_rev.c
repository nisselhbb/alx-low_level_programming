#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int n = O;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n = n - 1; n >= 0; i--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

