#include <stdio.h>

/**
 * main - Entry point
 * Fizz for numbers multiplied by 3
 * Buzz for numbers multiplied by 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if (n != 100)
		{
			printf(" ");
		}
		printf("\n");
		return (0);
	}
}
