#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 **_strdup - function returns a pointer to the duplicated string
 *
 *@str: char
 *
 *Return: 0 on success or NULL if there isnt enough space
 *
 */

char *_strdup(char *str);
{
	char *a;

	int i, x = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')

		i++;
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)

		a[x] = str[x];
	return (a);
}
