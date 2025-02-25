#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searche for a val in a sorted array of integers,
 *                 ...using the Binary search algorithm.
 *
 * @array: ptr to the first element of the array to search in.
 *
 * @size: no. of elements in the array.
 *
 * @value: val to search for.
 *
 * Return: the index where value is located, or
 * -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
