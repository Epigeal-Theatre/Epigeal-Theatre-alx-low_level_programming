#include "lists.h"

/**
 * get_nodeint_at_index - return the node at
 * ...specified index in a linked list
 *
 * @head: first node in our ll
 * 
 * @index: specified index
 *
 * Return: pointer to the node or NULL if unssuccessful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)

	{
	temp = temp->next;
	i++;
	}

	return (temp ? temp : NULL);
}
