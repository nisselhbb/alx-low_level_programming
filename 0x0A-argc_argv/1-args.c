#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command line
 * arguments
 * @argv: the program command line
 * arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]=%s\n", i, argv[i]);
	}
	(void)argc;
	return (0);
}
