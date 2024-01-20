#include "main.h"
/**
 *_puts - print str to stdout
 *@str: - str to print
 *_putchar - new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
