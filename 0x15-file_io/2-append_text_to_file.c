#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Pointer to filename
 * @text_content: String to add
 *
 * Return: NULL (FAILS)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length, x, y;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length])
		{
			length++;
		}
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
		return (-1);

	close(x);
	return (1);
}
