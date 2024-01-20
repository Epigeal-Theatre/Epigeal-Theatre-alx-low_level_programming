#include "main.h"
/**
 * _memset - this prog inputs value into a memory block
 * @s: starting address
 * @b: value to fill
 * @n: no. of bytes to change
 * Return: change the array with a new figure
 * containing n value for the bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
	s[x] = b;
	n--;
	}
	return (s);
}
