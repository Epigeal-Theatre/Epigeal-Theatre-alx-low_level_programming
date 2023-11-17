#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds new node
 * ...to the beginning of our linkedlist
 *
 * @head: this is a double pointer to list_t l
 *
 * @str: this is the new string we add into node
 *
 * Return: return the addres ofnew element
 * ...or return NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;


	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);

	new->len = len;

	new->next = (*head);

	(*head) = new;


	return (*head);
}
