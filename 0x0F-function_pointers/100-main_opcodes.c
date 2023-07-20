#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - checks code
 * @argc: the number of command line
 * arguments
 * @argv: the command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i--)
	{
		printf("%02hhx%s", *ptr++, i ? " " : "\n");
	}
	return (0);
}
