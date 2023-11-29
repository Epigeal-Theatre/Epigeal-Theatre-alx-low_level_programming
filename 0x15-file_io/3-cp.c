#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fxd);

/**
 * creates_buffer - this function Allocates 1024 bytes
 *
 * @file: This is a placeholder for file name
 *
 * Return: pointer to new file
 */

char *creates_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buffer);
}

/**
 * close_file - this function closes the file descriptors
 *
 * @fxd: these are the fd we want to close
 */

void close_file(int fxd)
{
	int c;

	c = close(fxd);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fxd);
	exit(100);
	}
}

/**
 * main - this function will copy contents of a file into another
 *
 * @argc: placeholder for arguments
 *
 * @argv: this is an array pointer to our arguments
 *
 * Return: 0 opon success.
 *
 * Description: If argument count is wrong - exit code 97.
 *
 * If file_from doesnt exist - exit code 98.
 *
 * If file_to cant be written to - exit code 99.
 *
 * If file_to or file_from cant be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;

	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1 || r == -1)

	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buffer);
	exit(98);
	}

	w = write(to, buffer, r);
	if (to == -1 || w == -1)

	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buffer);
	exit(99);
	}

	r = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
