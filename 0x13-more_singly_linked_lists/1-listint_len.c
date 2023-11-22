#include "lists.h"

/**
 * listint_len - Return elements in liked list
 *
 * @h: linked list of type listint_t we will traverse
 *
 * Return: how many nodes?
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)

	{
	num++;
	h = h->next;
	}

	return (num);
}
