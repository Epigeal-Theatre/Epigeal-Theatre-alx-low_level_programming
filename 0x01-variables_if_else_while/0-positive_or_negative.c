#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * More headers goes there
 * Main - main entry
 * Return: always return a 0 (success)
 * betty style doc for function main goes there
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
