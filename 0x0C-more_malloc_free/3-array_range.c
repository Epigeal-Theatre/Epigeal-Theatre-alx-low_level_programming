#include "main.h"
#include <stdlib.h>

/**
 * array_range - reates an array of integers
 *
 * @min: first value in arr
 *
 * @max: last value in arr
 *
 * Return: a pointer to the newly created array,
 * or null should min be greater than max
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
