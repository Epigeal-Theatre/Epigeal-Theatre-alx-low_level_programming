#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: no. of bytes of s2 to be concatenated into s1.
 * Return: Otherwise - pointer to memory of conc str. or Null for fail
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		c[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[len++] = s2[i];

	c[len] = '\0';

	return (c);
}
