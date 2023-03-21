#include <stdio.h>

/**
 * main - to print _putchar
 * Return: always (0) (success)
*/

	int main(void)
{
	char ch_putchar[] = "_putchar";

	for (int count = 0; count < 20; count++)
	{
		if (ch_putchar[count] == '\0')
		{
			putchar('\n');
		}
		else
			putchar(ch_putchar[count]);
	}
	return (0);
}
