#include <stdio.h>

/**
 * main - Enrty point
 *Description: 'Print all single digit numbers starting from 0 to 9'
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
