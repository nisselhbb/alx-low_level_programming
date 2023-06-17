#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;
	int hex;

	for (number = 48; number <= 57; number++)
	{
	putchar(number);
	}
for (hex = 97; hex <= 102; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
