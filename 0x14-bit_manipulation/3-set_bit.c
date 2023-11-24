#include "main.h"

/**
 * set_bit - this function will sets the
 * ...value of a bit to 1 at a given index
 *
 * @n: a pointer to new no.
 *
 * @index: this is theindex of our bit
 * ...we shall set to 1
 *
 * Return: return 1 upon success, and -1 upon failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
