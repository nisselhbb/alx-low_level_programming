#ifndef DOG_H
#define DOG_H
/**
 * struct dog - combines data items of different
 * kinds
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	struct dog dog;

	dog.name = "Poppy";
	dog.age = 3.5;
	dog.owner = "Bob";
	return (0);
}
#endif
