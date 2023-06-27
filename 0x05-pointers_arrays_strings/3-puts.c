#include "main.h"
#include <string.h>

/**
 * _puts - prints a string to stdout followed by a new line
 * @str: the string to be printed
 *
 * Return: no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str);
		str++;
	}
}
