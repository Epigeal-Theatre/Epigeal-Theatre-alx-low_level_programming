#include "main.h"

/**
 * print_binary - this function will print
 * ...the binary representation of a number.
 *
 * @n: number in binary to print
 */

void print_binary(unsigned long int n)
{
	int x;
	int count = 0;

	unsigned long int crt;

	for (x = 63; x >= 0; x--)

	{
	crt = n >> x;

	if (crt & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
	}

	if (!count)
	_putchar('0');
}
