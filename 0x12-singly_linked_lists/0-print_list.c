#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function will
 * ...print the elements in our linked list
 *
 * @h: this is a pointer to list_t
 *
 * Return: how many nodes we printed
 */

size_t print_list(const list_t *h)
{
	size_t;

	s = 0;

	while (h)

	{
	if (!h->str)
	printf("[0] (nil)\n");

	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}


	return (s);
}
