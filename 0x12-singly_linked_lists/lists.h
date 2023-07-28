#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct list_t
{
	unsigned int length;
	char *str;
	struct list_t *next;
}list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
#endif
