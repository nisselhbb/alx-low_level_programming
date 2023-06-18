#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a < 10; a++)
	{
		for (b = a + '1'; b < 10; b++)
		{
			putchar(a + 48);
			putchar(b + 48);

			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


