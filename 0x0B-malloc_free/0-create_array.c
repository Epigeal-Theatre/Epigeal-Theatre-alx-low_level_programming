#include "main.h"
#include <stdlib.h>

/**
 *create_array -create_array(unsigned int size, char c)
 *Description: create-array -char *create_array(unsigned int size, char c);
 *@c: - char
 *@size: size of str
 *Return: NULL if compilation fails or a pointer to an array if success
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	str[i] = c;

		return (str);
}
