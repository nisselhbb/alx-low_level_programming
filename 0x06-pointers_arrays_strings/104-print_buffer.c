#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @s: pointer to the buffer
 * @size: size of bytes
 *
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int a, i, j;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return (0);
	}
	while (a < size)
	{
		j = (size - a < 10) ? (size - a) : 10;
		printf("%08x: ", a);

		for (i = 0; i < 10; i++)
		{



