#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		puts(*s);
}
