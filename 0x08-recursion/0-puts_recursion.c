#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if ([s] != '\0')
		_putchar(*s);
	_putchar('\n');
}
