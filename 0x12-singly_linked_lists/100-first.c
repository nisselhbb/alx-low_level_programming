#include <stdio.h>
/**
 * pre_main - prints code before the main
 * function is executed
 * Return: no return
 */
void pre_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
