#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this function returns
 * ...no. of elements in our linked list
 *
 * @h: this is a pointer to out list_t
 *
 * Return: how many elements do we have in in h?
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
return (n);

}
