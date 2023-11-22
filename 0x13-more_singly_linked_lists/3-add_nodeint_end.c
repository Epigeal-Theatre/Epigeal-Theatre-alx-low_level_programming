#include "lists.h"

/**
 * add_nodeint_end - adds a node to
 * ...the end of our linked list
 *
 * @head: pointer to the first element in lisyt
 *
 * @n: new element data
 *
 * Return: pointer to new node or NULL if unsuccessful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
