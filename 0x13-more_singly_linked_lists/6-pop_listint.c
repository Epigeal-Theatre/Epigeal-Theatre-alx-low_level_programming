#include "lists.h"

/**
 * pop_listint - delete head node of  linked list
 *
 * @head: a pointer to the first element in llst
 *
 * Return: the data inside deleted elements
 * ...return a zero if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
