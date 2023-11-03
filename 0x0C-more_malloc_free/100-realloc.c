#include "main.h"

/**
* _realloc - reallocate a memory block using malloc and free
*
* @ptr: pointer to the memory used in first instance
*
* @old_size: old size of memory
*
* @new_size: newer size of memory
*
* Return: pointer to allocated memory.otherwise NULL upon failure
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;

	unsigned int i, ns;

	ns = new_size;

	char *old = ptr;


	if (ptr == NULL)
	{
	c = malloc(new_size);
	return (c);
	}
	else if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	else if (new_size == old_size)
	return (ptr);
	c = malloc(new_size);
	if (c == NULL)
	return (NULL);
	if (new_size > old_size)
	ns = old_size;
	for (i = 0; i < ns; i++)
	c[i] = old[i];
	free(ptr);
	return (c);

}
