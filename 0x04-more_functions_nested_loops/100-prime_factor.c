#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long number = 612852475143;
	long div = 2;

	while (number > div)
	{
		if (number % div == 0)
		{
			number = number / div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", number);
	return (0);
}


