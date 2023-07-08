#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line
 * arguments
 * @argv: the program command line
 * arguments
 * Return: 1 if more than 2 arguments, 0
 * if correct
 */
int main(int argc, char *argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int mul = i * j;

	printf("%d\n", mul);
	return (0);
}

