#include "main.h"
#include <string.h>
int check_palindrome(chat *s, int left, int right);

/**
 * is_palindrome - checks if a string is a
 * palindrome
 * @s: pointer to the string
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - helps in checking if a string
 * is palindrome
 * @s: pointer to the string
 * @left: the 1st charcter of the string
 * @right: the last charcter of the string
 * Return: 1 if the string is palidrome, 0 is not
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}
