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

	while (num > div)
	{
		if (num % div == 0)
		{
			num = num / div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%d\n", num);
	return (0);
}


