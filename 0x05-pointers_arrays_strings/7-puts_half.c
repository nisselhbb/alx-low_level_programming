#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: no return
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half = len / 2;
	int index;

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	for (index = half; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
