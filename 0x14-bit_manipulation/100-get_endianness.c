#include "main.h"

/**
 * get_endianness - this function will check the endianness
 *
 * Return: 0 if big,or  1 if small
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
