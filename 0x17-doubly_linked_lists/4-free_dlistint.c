#include "lists.h"

/**
 * free_dlistint - this func frees  dlistint_t list
 *
 * @head: the pointer to head of list
 *
 * Return: no return value
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;
	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
