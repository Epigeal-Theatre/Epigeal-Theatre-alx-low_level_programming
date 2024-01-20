#include "main.h"

/**
 * char *_strcpy - copy the str pointed to by source (src)
 * @dest: copy to dest
 * @src: copy from src
 * Return: str val
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;

	int b;

	b = 0;

	while (*(src + a) != '\0')
	{
	a++;
	}
	for ( ; b < a ; b++)
	{
	dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
