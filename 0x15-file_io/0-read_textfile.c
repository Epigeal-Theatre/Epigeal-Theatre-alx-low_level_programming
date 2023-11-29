#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this function  reads a text
 * ...file and prints it to the POSIX standard output.
 *
 * @filename: txt fl to read
 *
 * @letters: how many letters shall we read
 *
 * Return: return bytes printed or 0 upon failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;

	ssize_t fxd;

	ssize_t xw;

	ssize_t xt;

	fxd = open(filename, O_RDONLY);
	if (fxd == -1)
	return (0);

	buff = malloc(sizeof(char) * letters);
	xt = read(fxd, buff, letters);
	xw = write(STDOUT_FILENO, buff, xt);

	free(buff);

	close(fxd);

	return (xw);
}
