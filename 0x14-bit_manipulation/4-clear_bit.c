#include "main.h"

/**
 * clear_bit - this function will set the value of a bit to 0
 *
 * @n: pointer to number we shall change
 *
 * @index: index of first bit
 *
 * Return: 1 upon success, and  -1 upon failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
