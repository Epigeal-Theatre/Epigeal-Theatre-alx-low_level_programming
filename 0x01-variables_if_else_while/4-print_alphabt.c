#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase skipping e and q
 * Return: 0(your code runs)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}
