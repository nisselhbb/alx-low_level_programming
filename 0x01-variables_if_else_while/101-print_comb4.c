#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + 48);
				putchar(b + 48);
				putchar(c + 48);

				if (a != 8 || b != 9 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
