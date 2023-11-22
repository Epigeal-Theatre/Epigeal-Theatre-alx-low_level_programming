#include "lists.h"

/**
 * add_nodeint - this func willl add a new node to
 * ...the beginning of a linked list
 *
 * @head: pointer to the first node
 *
 * @n: data to be inserted in the new node
 *
 * Return: pointer to new node or NULL if unsuccessful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)

	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

