#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *@n: natural number
 *
 * Return: no return
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
