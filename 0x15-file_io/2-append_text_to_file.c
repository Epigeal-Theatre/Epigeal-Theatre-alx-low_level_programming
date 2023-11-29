#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file
 *
 * @filename: this is a pointer to our filename
 *
 * @text_content: this is the string we will append
 *
 * Return: return - -1. upon failure or -1 upon success
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int xo, xw, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)

	{
	for (len = 0; text_content[len];)
	len++;
	}

	xo = open(filename, O_WRONLY | O_APPEND);
	xw = write(xo, text_content, len);

	if (xo == -1 || xw == -1)
	return (-1);

	close(xo);

	return (1);
}
