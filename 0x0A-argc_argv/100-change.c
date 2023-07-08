#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of command line
 * arguments
 * @argv: the program command line
 * arguments
 * Return: 1 if incorrect, 0 if the opposite
 */
int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int i = 0;
	int count = 0;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (1);
	}
	for (j = 0; j < 5; j++)
	{
		count = count + i / cents[j];
		i = i % cents[j];
	}
	printf("%i\n", cents);
	return (0);
}
