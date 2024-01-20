#include "main.h"
/**
* _strchr - main
* @s: inpt 1
*@c: inpt 2
* Return: 0  for (Success)
*/
char *_strchr(char *s, char c)
{

	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
