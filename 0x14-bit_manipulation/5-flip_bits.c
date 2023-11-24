#include "main.h"

/**
 * flip_bits - this function will return the number of
 * ...bits we need to flip to get from one number to another.
 *
 * @n: number one
 *
 * @m: number two
 *
 * Return: how many bits we changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	int count = 0;
	unsigned long int crt;
	unsigned long int exl = n ^ m;

	for (x = 63; x >= 0; x--)

	{
	crt = exl >> x;
	if (crt & 1)
	count++;
	}

	return (count);
}
