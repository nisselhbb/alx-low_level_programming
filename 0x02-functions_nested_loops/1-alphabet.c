#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'printing the alphabet in lowercase'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	return (0);
}
