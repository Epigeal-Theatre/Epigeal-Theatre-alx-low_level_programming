#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: char to check for uppercase letters
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
