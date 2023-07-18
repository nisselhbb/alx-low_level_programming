#include "dog.h"
/**
 * init_dog - initialize a variable of type
 * struct
 * @d: pointer to the dog
 * @name: pointer to the dog's name
 * @age: the dog's age
 * @owner: pointer to the dog's owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
