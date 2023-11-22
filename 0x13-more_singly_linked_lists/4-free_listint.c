#include "lists.h"

/**
 * free_listint - this function will
 * ...free our linked list
 *
 * @head: listint_t the list we want to  free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)

	{
	temp = head->next;
	free(head);
	head = temp;
	}

}
