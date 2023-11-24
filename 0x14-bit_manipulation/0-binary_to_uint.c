#include "main.h"

/**
 * binary_to_uint - this function will
 * ...convert a binary to an unsigned int
 *
 * @b: this is the binary number string
 *
 * Return: our unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dval = 0;

	if (!b)
	return (0);

	for (x = 0; b[x]; x++)

	{
	if (b[x] < '0' || b[x] > '1')
	return (0);

	dval = 2 * dval + (b[x] - '0');
	}

	return (dval);
}
