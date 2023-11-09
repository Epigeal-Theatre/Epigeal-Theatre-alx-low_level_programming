#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - return the sum of parameters 
*
* @n: no. of passed parameters
*
* @...: parameters for which we must calc the sum
*
* Return: sum of parameters or 0 If n == 0
*         
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list lx;

	unsigned int x, sum = 0;

	va_start(lx, n);

	for (x = 0; x < n; x++)

	sum += va_arg(lx, int);

	va_end(lx);

	return (sum);
}

