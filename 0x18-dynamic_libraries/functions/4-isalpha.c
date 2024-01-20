#include "main.h"
/**
 * _isalpha - check if there are
 * alphabetic characters
 * @c: character check
 * Return: 1 if c is a letter, 0 if c is not a a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
