#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: n member elements
 *
 * @size: size of elements*n
 *
 * Return: a pointer to the memory allocated or Null upon failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *xm;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	xm = malloc(size * nmemb);

	if (xm == NULL)
		return (NULL);

	c = xm;

	for (i = 0; i < (size * nmemb); i++)
		c[i] = '\0';

	return (xm);
}
