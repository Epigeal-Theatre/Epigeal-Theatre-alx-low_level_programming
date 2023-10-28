#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: The character to be printed
 * Return: 1 (success)
 * On error, -1 (value to return). set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
