#include "main.h"
/**
 *_memcpy - this function copies  the memory area
 *@dest: dest storage
 *@src: src storage
 *@n: no of bytes
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
	dest[x] = src[x];
	n--;
	}
	return (dest);
}
