#include "main.h"
/**
 * _strlen - return len of the str
 * @s: str
 * Return: len
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
	x++;
	s++;
	}
	return (x);
}
