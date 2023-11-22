#include "lists.h"

/**
 * print_listint - prints all s function elements of ll
 *
 * @h: linked listtype listint_t
 *
 * Return: how many nodes?
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);
}
