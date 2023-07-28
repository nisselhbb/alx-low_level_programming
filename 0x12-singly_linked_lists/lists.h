#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_c - singlt linked list
 * @str: pointer to string
 * @len: string's length
 * @next: pointer to the next node
 */
typedef struct list_c
{
	unsigned int len;
	char *str;
	struct list_c *next;
}list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
#endif
