#include<stdio.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Print str followed by \n
*
* @separator:String to print
*
* @n: no. of str passed
*
* @...: no. of strings to print
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *s;

	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
	s = va_arg(strings, char *);

	if (s == NULL)
	printf("(nil)");
	else
	printf("%s", s);

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
