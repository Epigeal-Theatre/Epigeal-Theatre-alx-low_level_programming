#include "main.h"
/**
 * _strcmp - it compare the values of str
 * @s1: value input
 * @s2: value input
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
