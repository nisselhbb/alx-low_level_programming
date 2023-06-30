#include "main.h"

/**
 * _strncat - concatenates two string at most n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: most n bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i;

	while (dest_length != '\0')
		dest_length++;
	for (i = 0; i < n && src[i] != '\0')
		dest[dest_length + i] = src[i];
	dest[dest_length + i] = '\0';
	return (dest);
}
