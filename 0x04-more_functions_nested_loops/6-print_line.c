#include "main.h"
/**
 * print_line - will draw a st line in terminal
 * @n: no of times character _ will be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}

}
