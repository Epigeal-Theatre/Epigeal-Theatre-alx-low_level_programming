#include "main.h"
/**
 *  _strcat - this function
 *  concatenates 2 strings
 *  @dest: value entered
 *  @src: value entered
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;

	}

	while (src[b] != '\0')

	{

	dest[a] = src[b];

	a++;

	}
	dest[a] = '\0';
	return (dest);

}
