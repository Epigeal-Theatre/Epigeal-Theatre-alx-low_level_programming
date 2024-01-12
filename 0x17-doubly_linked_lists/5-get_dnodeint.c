#include "lists.h"

/**
 * get_dnodeint_at_index - this func returns nth node of dlistint_t ll
 *
 * @head: the pointer to the head of the list
 *
 * @index: index of node to search for starting 0
 *
 * Return: the nth node or return null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;

	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
