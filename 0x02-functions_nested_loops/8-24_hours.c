#include "main.h"
/**
 * jack baeur - function is to print every min of the day of jack baeur, starti
 * n from 00:00 to 23:59, min loop counts min, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
		while (mins <= 59)
		{
			mins_reminder = mins % 10;
			hours_reminder = mins % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_reminder + '0');
			_putchar(' : ');
				_putchar(mins / 10 + '0');
			_putchar(mins_reminder + '0');
			mins++;
			_putchar('\n');

			hours++;
			mins = 0;
		}
	}
}
