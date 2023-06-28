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

	for (index = half; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
