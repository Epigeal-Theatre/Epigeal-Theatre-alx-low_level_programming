#include "main.h"

/**
 * create_file - this function creates a file
 *
 * @filename: this is a pointer to file created
 *
 * @text_content: this is a pointer to a string to be written
 *
 * Return: return - -1. upon failure and on success - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fxd, xw, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	fxd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	xw = write(fxd, text_content, len);

	if (fxd == -1 || xw == -1)
	return (-1);

	close(fxd);

	return (1);
}
