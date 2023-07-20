#include "3-calc.h"
/**
 * main - Entr point
 * @argv: the number of command line
 * arguments
 * @argc: tthe command line arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int (*main_op)(int, int);

	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	main_op = get_op_func(argv[2]);
	if (!main_op)
	{
		printf("Error\n");
		exit(99);
	}
	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", main_op(num1, num2));
	return (0);
}

