#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number > '9'; number++)
	{
	if (number <= '9')
	{
	putchar(number);
	}
	else
	{
	putchar(number + 'a');
	}
	}
putchar('\n');
return (0);
}
