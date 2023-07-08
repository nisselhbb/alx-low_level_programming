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
int main(int argc, char *argv[])
{
	int i;
	int j;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}

