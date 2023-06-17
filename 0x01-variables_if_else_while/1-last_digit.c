#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Declaration: 'check if the number is graeter than 5 or less than 6'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (LD > 5)
	{
		printf("last digit of %d is %d and greater than 5\n", n, LD);
	}
	else if (LD < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	}
	else
		(LD = 0);
	{
		printf("last digit of %d is %d and is 0\n", n, LD);
	}
	return (0);
}

