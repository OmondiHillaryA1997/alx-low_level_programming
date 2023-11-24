#include "main.h"

/**
 * binary_to_uint - Function that converts a binary to an unsigned integer
 * @b: argument binary
 *
 * Return: integer number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int index, len;

/* getting the binary length */
	len = 0;
	while (b[len] != '\0')
	{
		len++;
	}

/* setting the binary number to integer */
	for (index = 0; index < len; index++)
	{
		if ((b[index] != '0') && (b[index] != '1')) /* b should be either 0 or 1 */
		{
			return (0);
		}
		else if (b[index] == '1')
		{
			res = (res << 1) | 1; /* setting 0th number to 1 */
		}

		else
		{
			res = res << 1; /* setting number to 1 */
		}

	}
	return (res);
}
