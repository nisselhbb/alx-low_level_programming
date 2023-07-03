#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destinated memory area
 * @src: old memory area
 * @n: number of bytes in src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp = src[i];
		src[i] = dest[i];
		dest[i] = temp;
	}
	return (dest);
}
