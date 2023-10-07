#include <stdio.h>
/**
 *  main - this program prints the alphabet in lowercase and then in uppercase
 *  Return: 0 (your code runs)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
