#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int q;

	q = _islower('H');
	_putchar(q + '0');
	q = _islower('o');
	_putchar(q + '0');
	q = _islower(108);
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}

