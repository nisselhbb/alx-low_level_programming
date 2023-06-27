#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: no return
 */
void puts2(char *str)
{
	int len = strlen[str];
	int index;

	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
