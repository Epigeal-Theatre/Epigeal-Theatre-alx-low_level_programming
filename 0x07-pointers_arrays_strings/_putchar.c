#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to be printed
* Return: 1 (success)
* On error, return -1 , and errno is to be set appropriately
*/
int _putchar(char c)
{
		return (write(1, &c, 1));
}
