#include "lists.h"

/**
 * dlistint_len - this func returns number of elements in double ll
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
