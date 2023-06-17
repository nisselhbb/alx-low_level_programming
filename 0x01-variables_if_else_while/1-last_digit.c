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
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("last digit of %d is %d and greater than 5\n", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("last digit of %d is %d and less than 6\n", n, lastdigit);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, lastdigit);
	}
	return (0);
}
