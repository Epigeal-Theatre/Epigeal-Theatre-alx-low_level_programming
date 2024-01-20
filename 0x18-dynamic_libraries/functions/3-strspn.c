#include "main.h"
/**
 * _strspn - entry
 * @s: value input
 * @accept: inputed val
 * Return: 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	{
	n++;
	break;
	}
	else if (accept[x + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}
