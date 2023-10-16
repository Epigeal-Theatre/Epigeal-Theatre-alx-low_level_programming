#include "main.h"
/**
 * *_strcpy - copies the pointed to,str, cy the src
 * including the terminating the
 * null byte (\0) to the buffer pointed to by dest
 * @dest: the pointer to the buffer to which we copy the string
 * @src: string to copy
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
