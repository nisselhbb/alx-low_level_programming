#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct
 * @d: pointer to the dog struct
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
