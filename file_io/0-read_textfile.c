#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints to the POZIX
 * @filename: file to be read
 * @letters: nub of letters to be read
 *
 * Return: (0) FAILS or number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t x, y, z;

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}

	ch = malloc((letters) * sizeof(char));
	z = read(x, ch, letters);
	y = write(STDOUT_FILENO, ch, z);
	free(ch);
	close(x);
	return (y);
}
