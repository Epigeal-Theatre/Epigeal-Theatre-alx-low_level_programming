#include "main.h"

/**
 * get_bit - this function will return
 * ...the value of a bit at a given index.
 *
 * @n: search
 *
 * @index: bit index
 *
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
