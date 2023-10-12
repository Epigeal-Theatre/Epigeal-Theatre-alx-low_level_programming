#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: The charceter
 * Return: 1
 */

int _isalpha(int w)

{
	if ((w >= 65 && w <= 90) || (w >= 97 && w <= 122))
	{
		return (1);
	}
	return (0);
}
