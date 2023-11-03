#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *malloc_checked - use malloc to allocate mem
 *@b: - size of the memory
 *Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *aaa;

	aaa = malloc(b);
	if (aaa == NULL)
		exit(98);
	else
		return (aaa);
}
