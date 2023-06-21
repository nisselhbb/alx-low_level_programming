#include <stdlib.h>
#include "main.h"

/**
 * _islower - Enty point
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	char letter;
	char c;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (islower c)
		{
			return (1);
		}
		_putchar(letter);
		_putchar('\n');
	}
	return (0);
}


