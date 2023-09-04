#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: file pointer
 * @text_content: string pointer
 *
 * Return: (0) FAILS
 */

int create_file(const char *filename, char *text_content)
{
	int c, y, length;

	if (filename == NULL)
	{return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	length = 0;
	while (text_content[length])
	{
		length++;
	}

	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (c == -1);
	{
		return (-1);
	}

	y = write(c, text_content, length);
	if (y == -1)
	{
		return (-1);
	}
	close(c);

	return (1);
}
