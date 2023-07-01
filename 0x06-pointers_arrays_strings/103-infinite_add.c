#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: pointer to the first number
 * @n2: pointer to the second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: adress of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenr = 0;
	int carry = 0, sum = 0, i, j;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		if (lenr < size_r - 1)
		{
			r[lenr] = (sum % 10) + '0';
			lenr++;
		}
		else
		{
			return (0);
		}
		r[lenr] = '\0';
	}
	for (i = 0, j = lenr - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
