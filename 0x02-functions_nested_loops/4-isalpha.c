#include "main.h"

/**
 * _isalpha - checks for any alphabetic char
 * @c: the character to be checked
 * Return: 1 if c is a alphabet else return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
