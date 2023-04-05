#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int length, int i);
int is_palindrome(char *s);

/**
 *find_strlen - returns length of string
 *@s: string to be measured
 *
 *Return: length of string
 */
 int find_strlen(char *s)
{
	int length = 0;

	if (*(s + length))
	{
		length++;
		length += find_strlen(s + length);
	}
	return (length);
}

/**
 *check_palindrome - checks string if is palindrome
 *@s: string to be checked
 *
 *Return: the length
 */

int check_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
	{
		return (i);
	}
	if (s[i] == s[length - i - 1])
	{
		return (check_palindrome(s, length, i));
	}
	return (0);
}

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string to be checked
 *@length: length of s
 *@i: index of the string to be checked
 *
 *Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;

	int length = find_strlen(s);

	if (*S == '\0')
	{
		return (1);
	}
	return (check_palindrome(s, length, i));
}

