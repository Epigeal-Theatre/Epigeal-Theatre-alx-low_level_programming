#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - the string for digit
* @str: array str
* Return: 0 (Success)
*/
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count str*/
	{
	if (!isdigit(str[count])) /*checks str for digit*/
	{
	return (0);
	}
	count++;
	}
	return (1);
	}

/**
 * main - Prints the name of  program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Go through the whole array*/
	{
	if (check_num(argv[count]))
	{
	str_to_int = atoi(argv[count]); /*ATOI --> convert string to integer*/
	sum += str_to_int;
	}

	else
	{
	printf("Error\n");
	return (1);
	}
	count++;
	}
	printf("%d\n", sum);
	return (0);
	}
