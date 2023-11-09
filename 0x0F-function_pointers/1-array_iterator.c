#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - print every element of the arr
*
* @array: arr
*
* @size: number of elements
*
* @action: action pointer
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	return;

	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}
