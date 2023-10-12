#include "main.h"
/**
 * main - main.
 * Return: Always 0.
 */
int main(void)
{
	int q;

	q = _isalpha('H');
	_putchar(q + '0');
	q = _isalpha('o');
	_putchar(q + '0');
	q = _isalpha(108);
	_putchar(q + '0');
	q = _isalpha(';');
	_putchar(q + '0');
	_putchar('\n');
	return (0);
}
