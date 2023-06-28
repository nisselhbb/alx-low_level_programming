#include "main.h"

/**
 * _strcpy - copies string pointed to
 * @dest: another string
 * @src: pointer the string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index]
	}
	dest[index++] = '\0';
	return (dest);
}
