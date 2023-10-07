#include <stdio.h>

/**
 * main -this program prints the alphabet in lower case when executed
 *
 *  Return:  0 (your code runs)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
