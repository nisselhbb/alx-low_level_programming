#include <stdio.h>

/**
 * main
 * Description: 'prints all single digit numbers to 9 starting from 0'
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
