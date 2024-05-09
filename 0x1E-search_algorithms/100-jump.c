#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Search for a val in a sorted array of integers
 *               ...using the Jump search algorithm.
 *
 * @array: Ptr to the first element of the array to search.
 *
 * @size: No. of elements in array.
 *
 * @value: Val to search for.
 *
 * Return: first index where value is located, or -1 if not found or if
 *         array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
