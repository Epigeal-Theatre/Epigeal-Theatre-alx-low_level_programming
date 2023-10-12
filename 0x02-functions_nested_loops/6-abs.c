#include "main.h"


/**
 * _abs - Computers the absolute
 * @x: computed value
 * Return: Absolute value
 */
int _abs(int x)
{
	if (x < 0)
	{
		int abs_val;


		abs_val = x * -1;
		return (abs_val);
	}
	return (x);
}
