#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free the linked list
 *
 * @head: list_t - the list we want to free
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
