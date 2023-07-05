#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	int i = 0;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}

}
