#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int length = 0;
	int a = 0;
	int b;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	b = length - 1;
	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;

		a++;
		b--;
	}
}

